console.log("working");


setInterval(() => {
    let mytime = new Date();
    let hours = mytime.getHours()
    let minutes = mytime.getMinutes()
    let seconds = mytime.getSeconds()


    if (hours >= 12) {
        mysession = "PM";
    }
    else {
        mysession = "AM";
    }

    if (hours > 12) {
        hours = hours - 12;
    }
    if (hours == 0) {
        hours = 12;
    }

    if (hours < 10) {
        hours = "0" + hours;
    }

    if (minutes < 10) {
        minutes = "0" + minutes;
    }

    if (seconds < 10) {
        seconds = "0" + seconds;
    }


    let myclock = document.getElementById("clock");
    myclock.innerText = hours + ":" + minutes + ":" + seconds + " " + mysession



}, 1000);

