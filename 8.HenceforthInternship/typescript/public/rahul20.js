"use strict";
function display3(a1, property) {
    console.log(property, a1[property]);
}
let details = {
    name: "John",
    age: 30,
};
display3(details, "name");
display3(details, "age");
