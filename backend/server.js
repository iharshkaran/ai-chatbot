import dotenv from 'dotenv';
dotenv.config();
import app from './src/app.js';
import { createServer } from 'http';
import { Server } from 'socket.io';
import generateText from './src/services/ai.service.js';

const httpServer = createServer(app);
const io = new Server(httpServer, { /* options */ });

io.on("connection", (socket) => {

    console.log('A user connected');

    socket.on("disconnect", () => {
        console.log('A user disconnected');
    });

    socket.on("ai-message", async (data) => {

        console.log('Received AI message:', data.prompt);
        const response = await generateText(data.prompt);
        console.log('AI response:', response);
        socket.emit("ai-message-response", {msg: response});
    });

});




httpServer.listen(3000, () => {
    console.log('Server is running on port 3000');
});