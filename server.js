const express = require('express')
const app = express()
const fs = require('fs')
const matter = require('gray-matter');
// app.use(express.static(''))
// app.use(express.urlencoded())
// app.engine('html', require('ejs').renderFile)
// app.set('view engine', 'html');
app.use('/public', express.static(__dirname + '/static'))

app.get('/', (req, res) => {
    res.sendFile(__dirname + '/template/index.html')
});

app.get('/list', (req, res) => {

    const list = GetList()
    // const data = JSON.stringify(list);
    // console.log(data)
    res.send(JSON.stringify(list));
});


const port = process.env.PORT || 3000;

app.listen(port, () => {
    console.log(`Example app listening at http://localhost:${port}`)
})


function GetList() {

    const list = []
    let filesList = fs.readdirSync(__dirname + '/Code');
    // fs.readdir(,(err, files) => {
    //     if (err) return;
    //     filesList = files;
    // })

    // console.log(filesList)

    filesList.forEach(file => {
        const data = fs.readFileSync(__dirname + '/Code/' + file);
        const dataForm = matter(data);
    
        const toAdd = { "data": dataForm.data, "content": dataForm.content }
        list.push(toAdd);
    })

    return list;
} 