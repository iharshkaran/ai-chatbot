import { useEffect, useState } from "react";
import { io } from "socket.io-client";

const socket = io("http://localhost:3000");

export default function App() {
  const [messages, setMessages] = useState([]);
  const [loading, setLoading] = useState(false);
  const [input, setInput] = useState("");

  console.log(messages)

  useEffect(() => {
    socket.on("ai-message-response", (response) => {
      setMessages((prev) => [
        ...prev,
        {
          sender: "ai",
          text: response,
        },
      ]);
      console.log(setMessages);
      
      setLoading(false);
    });

    return () => {
      socket.off("ai-message-response");
    };
  }, []);

  const sendMessage = () => {
    if (!input.trim()) return;

    setMessages((prev) => [
      ...prev,
      {
        sender: "user",
        text: input,
      },
    ]);

    setLoading(true);

    socket.emit("ai-message", input);

    setInput("");
  };

  return (
    <div className="h-screen bg-zinc-900 ">
      <div className="h-screen md:max-w-1/3 bg-zinc-900 flex flex-col mx-auto">

      {/* Header */}

      <div className="h-18 flex justify-center items-center border-b border-zinc-700">

        <h1 className="text-3xl font-bold text-white">
          AI ChatBot
        </h1>

      </div>

      {/* Chat */}

      <div className="flex-1 overflow-y-auto p-8">

        {messages.map((msg, index) => (
          <div
            key={index}
            className={`mb-5 flex ${
              msg.sender === "user" ? "justify-end": "justify-start"
            }`}
          >
            <div
              className={`max-w-xl px-5 py-3 rounded-xl ${
                msg.sender === "user" ? "bg-blue-600 text-white" : "bg-zinc-800 text-white"
              }`}
            >
              {msg.text}
            </div>
          </div>
        ))}

        {loading && (
          <div className="flex justify-start">
            <div className="bg-zinc-800 px-5 py-3 rounded-xl text-white">
              Thinking...
            </div>
          </div>
        )}

      </div>

      {/* Input */}

      <div className="p-5 border-t border-zinc-700 flex gap-3">

        <input
          value={input}
          onChange={(e) => setInput(e.target.value)}
          onKeyDown={(e) => {
            if (e.key === "Enter") sendMessage();
          }}
          placeholder="Ask anything..."
          className="flex-1 p-4 rounded-xl bg-zinc-800 text-white outline-none"
        />

        <button
          onClick={sendMessage}
          className="bg-blue-600 hover:bg-blue-700 px-8 rounded-xl text-white"
        >
          Send
        </button>

      </div>

    </div>
    </div>
  );
}