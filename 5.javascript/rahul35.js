// console.log("working Of AJAX");

let myfetch = document.getElementById("fetch");
myfetch.addEventListener("click", fetchingdata);

function fetchingdata() {
    let myxml = new XMLHttpRequest();

    console.log("one")

    // myxml.open("Get", "harry.txt", true);
    // myxml.open("Get", 'https://jsonplaceholder.typicode.com/posts/1', true);

    myxml.open("Post", 'https://dummy.restapiexample.com/api/v1/create', true);
    // myxml.setRequestHeader("Content-type", "application/json")

    console.log("two")

    myxml.onprogress = function name() {
        console.log("work on progress")
    }

    myxml.onreadystatechange = function () {
        console.log("the working state is ", myxml.readyState)
    }

    myxml.onload = function () {
        if (myxml.status == 200) {
            console.log("data is sent");
            mytext = this.responseText
            // mytext2 = this.responseText
            console.log(mytext)
            console.log(typeof mytext)
        }
        else {
            console.log("some error occured")
        }
    }
    console.log("three")

    params = `{ "name": "test564651", "salary": "123", "age": "23" }`
    // myxml.send()
    myxml.send(params)
    console.log("four")

}

let mypopulate = document.getElementById("populate");
mypopulate.addEventListener("click", populatedata);

function populatedata() {
    let myxml = new XMLHttpRequest();

    myxml.open("Get", 'https://dummy.restapiexample.com/api/v1/employees', true);
    // myxml.open("Get", 'https://jsonplaceholder.typicode.com/posts', true);

    myxml.onload = function () {
        if (myxml.status == 200) {
            console.log("data is send");
            myobj = JSON.parse(this.responseText);

            console.log(myobj)
            let mylist = document.getElementById("list");
            mystr = ""
            for (const key of myobj['data']) {
                // mystr = mystr + `<li>      ${myobj[key].title}                 </li>`
                mystr = mystr + `<li> ${key.employee_name} </li>`
            }
            // console.log(mystr)
            mylist.innerHTML = mystr

        }
        else {
            console.log("some error occured")
        }
    }

    myxml.send()

}