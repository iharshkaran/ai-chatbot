import dotenv from 'dotenv';
dotenv.config();
import app from './src/app.js';

import { createServer } from 'http';
import { Server } from 'socket.io';
import generateText from './src/services/ai.service.js';

const httpServer = createServer(app);
const io = new Server(httpServer, {
    cors: {
        origin: "http://localhost:5173"
    }
});


const chatHistory = [];

io.on("connection", (socket) => {
    console.log('A user connected');

    socket.on("disconnect", () => {
        console.log('A user disconnected');
    });



    socket.on("ai-message", async (data) => {

        console.log('Received AI message:', data);

        chatHistory.push({
            role: "user",
            parts: [{ text: data }]
        })



        try {
            const response = await generateText(chatHistory);
            chatHistory.push({
                role: "model",
                parts: [{ text: response }]
            });
            console.log('AI response:', response);
            socket.emit("ai-message-response", response);

        } catch (err) {
            socket.emit("ai-message-response", "Something went wrong.");
        }

    });

});


httpServer.listen(3000, () => {
    console.log('Server is running on port 3000');
});