enum Days{
    mon,tue,wed,thu=10,fri,sat,sun="abc"
}
let whichday: Days;
whichday = Days.wed;
console.log(whichday);
whichday = Days.mon;
console.log(whichday);
whichday = Days.sat
console.log(whichday);

function getday(a:Days):Days {
    return a
}
let myday: Days;
myday = Days.sun;
console.log(getday(myday))

enum Years{
    jan = "january",
    feb = "february",
    oct="october"
}
let whichyear: Years;
whichyear = Years.feb;
console.log(whichyear);
whichyear = Years.oct;
console.log(whichyear);

export{}
