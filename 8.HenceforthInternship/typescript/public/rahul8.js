"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var Days;
(function (Days) {
    Days[Days["mon"] = 0] = "mon";
    Days[Days["tue"] = 1] = "tue";
    Days[Days["wed"] = 2] = "wed";
    Days[Days["thu"] = 10] = "thu";
    Days[Days["fri"] = 11] = "fri";
    Days[Days["sat"] = 12] = "sat";
    Days["sun"] = "abc";
})(Days || (Days = {}));
let whichday;
whichday = Days.wed;
console.log(whichday);
whichday = Days.mon;
console.log(whichday);
whichday = Days.sat;
console.log(whichday);
function getday(a) {
    return a;
}
let myday;
myday = Days.sun;
console.log(getday(myday));
var Years;
(function (Years) {
    Years["jan"] = "january";
    Years["feb"] = "february";
    Years["oct"] = "october";
})(Years || (Years = {}));
let whichyear;
whichyear = Years.feb;
console.log(whichyear);
whichyear = Years.oct;
console.log(whichyear);
