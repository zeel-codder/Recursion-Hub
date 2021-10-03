
const Count = document.querySelector('.count');
const listData = document.querySelector('.container-list');
const Input = document.querySelector('.input');
let list = []
axios.get('/list').then((res) => {
    list = res.data;
    // console.log(list)
    SetData(list);
});


function SetData(list) {

    Count.innerHTML = list.length;

    


    const toadd = list.map((data, index) => {


        console.log(data);


        return `
            <div class="item">
                
                <div class="row">
                    <h3>${data.data.Name}</h3>
                    <a href="${data.data.Github}">Github</a>
                <a href="${data.data.WebSite || "#"}">WebSite </a>
            </div>
            
            <div>Problem: ${data.data.Problem}</div>
            <div>Description: ${data.data.Description}</div>
            
            <p>
                <a class="btn btn-primary" data-bs-toggle="collapse" href=${"#collapseExample" + index} role="button" aria-expanded="false" aria-controls=${"collapseExample" + index}
                >
                    Code
                </a>
                
            </p>
            <div class="collapse" id=${"collapseExample" + index}>
                <div class="card card-body">
                <h1>${data.data.Language} </h1>
                    <h3> ${data.data.Language.toLowerCase()} </h3>

                    <pre>
                    <code>
                    ${data.content.split("```")[1].substr(data.content.split("```")[1].indexOf("\n"))
    }
                    </code>
                    </pre>


            
                        
                    
            </div>
            </div>
        </div>
        `

    }).join('');

    listData.innerHTML = toadd;
}

function SetList(e) {

    if (Input.value == "") return SetData(list);
    const q = new RegExp(Input.value, 'gi');

    const newlist = list.filter((data) => {

        // console.log(data.data);


        return data.data.Name.match(q) || data.data.Problem.match(q);
    })
    SetData(newlist);
}
