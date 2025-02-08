const Count = document.querySelector(".count");
const listData = document.querySelector(".container-list");
const Input = document.querySelector(".input");
let count = 0;
let list = [];
function fetch() {
  axios.get("/list").then((res) => {
    list = res.data;
    SetData(list);
  });
}

function SetData(list) {
  if (!list) {
    if (count >= 10) return;
    count++;
    fetch();
    return;
  }
  let ct = 0;
  const toadd = list
    .map((data, index) => {
      try {
        ct++;
        return `
            <div class="item">
            <h3>${data.data.Name}</h3>
            <div class="row">
                <a href="${data.data.Github}">Github</a>
                <a href="${data.data.WebSite || "#"}">WebSite </a>
            </div>
            <div>Problem: ${data.data.Problem}</div>
            <div>Description: ${data.data.Description}</div>
            <p>
                <a class="btn btn-primary" data-bs-toggle="collapse" href=${
                  "#collapseExample" + index
                } role="button" aria-expanded="false" aria-controls=${
          "collapseExample" + index
        }>
                    Code
                </a>
            </p>
            <div class="collapse" id=${"collapseExample" + index}>
            <div class="card card-body">
            <h3> ${data.data.Language.toLowerCase()} </h3>
            <pre>
                <code>
                    ${data.content
                      .split("```")[1]
                      .substr(data.content.split("```")[1].indexOf("\n"))}
                </code>
            </pre> 
            </div>
            </div>
            </div>
            <br>
            `;
      } catch (e) {
        console.log("Unable to load Problem #", ct);
      }
    })
    .join("");
  Count.innerHTML = ct;
  listData.innerHTML = toadd;
}

function SetList(e) {
  if (Input.value == "") return SetData(list);
  const q = new RegExp(Input.value, "gi");
  const newlist = list.filter((data) => {
    try {
      return data.data.Name.match(q) || data.data.Problem.match(q);
    } catch (e) {
      return false;
    }
  });
  SetData(newlist);
}

fetch();
