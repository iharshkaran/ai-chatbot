import { Pinecone } from '@pinecone-database/pinecone';


const pc = new Pinecone({ apiKey: process.env.PINECONE_API_KEY });

const chatGptCloneIndex = pc.Index('chatgptclone');

async function createMemory({ vectors, metadata, messageId }) {
    await chatGptCloneIndex.upsert([{
        id: messageId,
        values : vectors,
        metadata
    }])
}

async function queryMemory({queryVector , limit = 5, metadata}) {

    const data = await chatGptCloneIndex.query({
        vector : queryVector,
        topK : limit,
        filter: metadata ? {metadata} : undefined,
        includeMetadata : true
    })

    return data.matches
    
}

export default {createMemory , queryMemory}