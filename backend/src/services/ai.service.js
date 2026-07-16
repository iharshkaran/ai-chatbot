import dotenv from 'dotenv';
dotenv.config();
import { GoogleGenAI } from "@google/genai";


const ai = new GoogleGenAI({});

async function generateText(chatHistory) {

        const response = await ai.models.generateContent({
            model: "gemini-3.1-flash-lite",
            contents: chatHistory,
        });

        return response.text;
}

export default generateText;