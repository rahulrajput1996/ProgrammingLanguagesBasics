console.log("working");
function func1() {
    return new Promise(function (resolve, reject) {
        setTimeout(() => {
            const error = false;
            if (!error) {
                console.log("resolved");
                resolve();
            }
            else {
                console.log("rejected");
                reject("not fullfilled");
            }
        }, 2000);
    })
}
func1().then(function () {
    console.log("working");
}).catch(function (error) {
    console.log("not working " + error);
})