# AI Chatbot 🤖

A real-time AI chatbot built with the MERN stack using Google Gemini API and Socket.IO. It enables instant two-way communication with AI through WebSockets, providing a fast and interactive chat experience.

---

## ✨ Features

- 🤖 AI-powered conversations using Google Gemini
- ⚡ Real-time messaging with Socket.IO
- 💬 Instant bidirectional communication
- 🎨 Clean and responsive chat interface
- 🔗 REST API + WebSocket architecture

---

## 🛠️ Tech Stack

### Frontend
- React.js
- Tailwind CSS
- Axios
- Socket.IO Client

### Backend
- Node.js
- Express.js
- Socket.IO
- Google Gemini API

---

## 📂 Project Structure

```
ai-chatbot/
│
├── backend/
│   ├── src/
│   ├── server.js
│   └── package.json
│
└── frontend/
    ├── src/
    ├── public/
    └── package.json
```

---

## 🚀 Getting Started

### Clone Repository

```bash
git clone https://github.com/iharshkaran/ai-chatbot.git
```

### Backend

```bash
cd backend
npm install
npx nodemon server.js
```

### Frontend

```bash
cd frontend
npm install
npm run dev
```

---

## 🔑 Environment Variables

Create a `.env` file inside the backend directory.

```env
GEMINI_API_KEY=your_api_key
```

---

## 🔄 Architecture

```
User
   │
   ▼
React Frontend
   │
Socket.IO
   │
Express Server
   │
Google Gemini API
   │
AI Response
   │
Socket.IO
   │
Frontend
```

---

## 🔮 Future Improvements

- 📝 Chat History
- 💾 MongoDB Integration
- 📄 PDF Chat (RAG)
- 🖼️ Image Upload
- 🎙️ Voice Chat
- 🌐 Multiple Chat Sessions
- ⚡ Streaming Responses

---

## 👨‍💻 Author

**Harsh**