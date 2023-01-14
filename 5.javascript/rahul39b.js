console.log("working");

// this response is coming from server
const studentdata = [
    { name: "rahul", subject: "python" },
    { name: "aashu", subject: "java" }
];

function addstudent(namesub) {
    return new Promise(function (resolve, reject) {
        setTimeout(() => {
            studentdata.push(namesub);
            console.log("data add");
            const error = false;
            if (!error) {
                console.log("resolved");
                resolve();
            }
            else {
                console.log("rejected");
                reject();
            }

        }, 3000);
    })

}

function fetchstudent() {
    setTimeout(() => {
        let str = ""
        studentdata.forEach(element => {
            str = str + `<li>${element.name}</li>`
        });
        console.log("data fetched")
        let str2 = document.getElementById("student");
        str2.innerHTML = str;
    }, 1000);
}

newstudentdata = { name: "lucky", subject: "c++" }
addstudent(newstudentdata).then(function () {
    fetchstudent();
}).catch(function () {
    console.log("error occured");
})

// fetchstudent();