# AI Assistant

An AI-powered backend built with **Node.js**, **Express**, **MongoDB**, **Socket.IO**, **Google Gemini**, and **Pinecone**. The application supports real-time AI conversations, JWT authentication, long-term memory using vector embeddings, semantic search, and Retrieval-Augmented Generation (RAG).

---

## 🚀 Features

- 🔐 JWT Authentication
- 🍪 Secure Cookie-based Authentication
- 💬 Real-time Chat using Socket.IO
- 🤖 Google Gemini Integration
- 🧠 Long-Term Memory with Pinecone
- 🔎 Semantic Vector Search
- 📚 Retrieval-Augmented Generation (RAG)
- 📝 Persistent Chat History
- ⚡ Context-Aware AI Responses
- 🏗️ MVC Architecture
- 🌐 REST APIs

---

## 🛠️ Tech Stack

### Backend

- Node.js
- Express.js
- MongoDB
- Mongoose
- Socket.IO

### AI

- Google Gemini API
- Pinecone Vector Database
- Vector Embeddings
- Semantic Search
- Retrieval-Augmented Generation (RAG)

### Authentication

- JWT
- HTTP Cookies
- bcrypt

---

## 📂 Project Structure

```
src/
│
├── controllers/
├── middleware/
├── models/
├── routes/
├── services/
│   ├── ai.service.js
│   └── vector.service.js
├── sockets/
├── db/
└── app.js
```

---

## 🧠 AI Workflow

```
User Message
      │
      ▼
Generate Embedding
      │
      ▼
Search Similar Memories (Pinecone)
      │
      ▼
Retrieve Relevant Context
      │
      ▼
Send Context + User Prompt
      │
      ▼
Google Gemini
      │
      ▼
AI Response
      │
      ▼
Store Chat + Embedding
```

---

## 💾 Memory System

The application stores conversation embeddings inside **Pinecone**.

For every message:

1. Generate embedding
2. Store embedding in Pinecone
3. Save metadata
4. Retrieve semantically similar conversations
5. Inject relevant context into the AI prompt

This enables **long-term memory** instead of relying only on recent chat history.

---

## 🔑 Environment Variables

Create a `.env` file.

```env
PORT=3000

MONGODB_URI=

JWT_SECRET=

GEMINI_API_KEY=

PINECONE_API_KEY=
```

---

## 📦 Installation

Clone the repository

```bash
git clone https://github.com/iharshkaran/ai-assistant.git
```

Install dependencies

```bash
npm install
```

Start the server

```bash
npm run dev
```

---

## 📡 Socket Events

### Client → Server

#### `ai-message`

```json
{
  "chat": "chatId",
  "content": "Hello AI"
}
```

---

### Server → Client

#### `ai-response`

```json
{
  "chat": "chatId",
  "content": "Hello! How can I help you?"
}
```

---

## API Features

- User Authentication
- User Registration
- Login / Logout
- Protected Routes
- Chat Management
- Message Storage
- AI Chat
- Memory Retrieval

---

## Current Capabilities

- ✅ Authentication
- ✅ Real-Time Communication
- ✅ Chat Persistence
- ✅ AI Integration
- ✅ Long-Term Memory
- ✅ Semantic Search
- ✅ RAG
- ✅ Socket.IO
- ✅ MVC Architecture

---

## Author

**Harsh**

---

#### ⭐ If you found this project interesting, consider giving it a star!