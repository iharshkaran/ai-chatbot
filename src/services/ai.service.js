import dotenv from 'dotenv';
dotenv.config();
import { GoogleGenAI } from "@google/genai";


const ai = new GoogleGenAI({});

async function generateText(prompt) {

        const response = await ai.models.generateContent({
            model: "gemini-3.1-flash-lite",
            contents: prompt,
        });

        return response.text;
}

export default generateText;