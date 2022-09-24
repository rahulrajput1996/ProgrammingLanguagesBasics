console.log("working");
function play() {
    var audio = new Audio('https://interactive-examples.mdn.mozilla.net/media/cc0-audio/t-rex-roar.mp3');
    audio.loop = true;
    audio.play();
}

let myidtime = document.getElementById("mysettime");
let myidbtn = document.getElementById("btn");

myidbtn.addEventListener("click", function (param) {


    let mytime = new Date(myidtime.value)
    myvalue = mytime.getTime();
    console.log(myvalue)

    mynewtime = Date.now()
    console.log(mynewtime)

    let difference = myvalue - mynewtime;

    if (difference >= 0) {
        setTimeout(() => {

            console.log("time matched");
            play();

        }, difference);

    }

})



