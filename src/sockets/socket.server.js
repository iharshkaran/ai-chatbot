import { Server } from "socket.io";
import * as cookie from "cookie";
import jwt from "jsonwebtoken";
import User from "../models/user.model.js";
import generateText from "../services/ai.service.js";
import Message from "../models/message.model.js";


function socketServer(httpServer) {

    const io = new Server(httpServer, { /* options */ });

    io.use(async (socket, next) => {
        const cookies = cookie.parseCookie(socket.handshake.headers.cookie || "");

        if (!cookies.token) {
            next(new Error("Authentication error: No token provided"))
        }

        try {

            const decoded = jwt.verify(cookies.token, process.env.JWT_SECRET);
            const user = await User.findById(decoded.userId);
            socket.user = user;

            next()

        } catch (err) {
            next(new Error("Authentication error: Invalid token"));
        }

    })

    io.on("connection", (socket) => {

        socket.on("ai-message", async (messagePayload) => {

            
            await Message.create({
                chat: messagePayload.chat,
                user: socket.user._id,
                content: messagePayload.content,
                role: "user"
            })

            const messageHistory = await Message.find({
                chat: messagePayload.chat
            })

            const response = await generateText( messageHistory.map((message) => {
                return {
                    role: message.role,
                    parts: [{ text: message.content }]
                }
            }));

            await Message.create({
                chat: messagePayload.chat,
                user: socket.user._id,
                content: messagePayload.content,
                role: "model"
            })

            socket.emit("ai-response", {
                content: response,
                chat: messagePayload.chat
            })
        })
    });

}

export default socketServer;