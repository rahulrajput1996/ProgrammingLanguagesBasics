// console.log("working");



let mydivelement = document.createElement('div');
mydivelement.id = "myedit";
mydivelement.innerText = "this is an editable para. you can change it";
mydivelement.style = "border:4px solid black; width:350px;height:150px;";

let myclass = document.querySelector(".heading");
myclass.after(mydivelement)

let mydiv = document.getElementById('myedit');

if (localStorage.getItem("text") != null) {

    mydiv.innerText = localStorage.getItem("text")
}


mydiv.addEventListener("click", function () {
    let mylength = document.getElementsByClassName("textarea").length;
    if (mylength == 0) {
        let mytext = mydiv.innerText;
        mydiv.innerHTML = `<textarea class="textarea" style="color: red;height: 113px;width: 317px;margin:10px" id="textarea">${mytext}</textarea>`
    }

    let mytextarea = document.getElementById("textarea");
    mytextarea.addEventListener('blur', function () {
        mydiv.innerText = mytextarea.value;
        localStorage.setItem("text", mydiv.innerText)
    })

})







