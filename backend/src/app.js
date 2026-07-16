import express from 'express';
const app = express();
import cors from 'cors';

app.use(cors());

app.get('/', (req, res) => {
  res.json({ message: 'Hello, World!' });
});

export default app;