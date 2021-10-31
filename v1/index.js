const express = require("express");

const app = express();

app.get("/",(req,res)=>{
    res.sendFile(__dirname + "/start.html")
})

app.get("/index.html",(req,res)=>{
    res.sendFile(__dirname + "/index.html")
})

app.listen(3000,()=>{
    console.log("server listening at port 3000");
})