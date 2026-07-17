
import { Server } from "socket.io";

function socketServer(httpServer) {
    const io = new Server(httpServer, { /* options */ });

    io.on("connection", (socket) => {
        console.log("New Socket connecion:", socket.id)
    });
}

export default socketServer;