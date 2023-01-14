console.log("this is my tute 42");

let mybtn = document.getElementById("mybtn");

let mycontent = document.getElementById("content")

// function getdata() {
//     console.log("second")
//     // url="harry.txt"
//     url ="https://api.github.com/users"
//     fetch(url).then((response) => {
//         console.log("four")
//         // return response.text();
//         return response.json();
//     }).then((data) => {
//         console.log("five")
//         console.log(data);
//     })
// }

// console.log("first")
// getdata();
// console.log("third")

function postdata() {
    url = 'https://jsonplaceholder.typicode.com/todos/1'
    data = { "name": "test", "salary": "123", "age": "23" }
    params = {
        method: 'post',
        headers: {
            'content-type':'application/json'
        },
        body: data
    }
    fetch(url).then((Response) => {
        return Response.json();
    }).then((data) => {
        console.log(data);
    })
}
postdata();