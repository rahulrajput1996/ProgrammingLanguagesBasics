var myfun = function (firstname, lastname) {
    console.log(firstname);
    console.log(lastname);
};
myfun("rahul", "singh");
// let myfun2 = (myname) => {
//     console.log(myname.firstname);
//     console.log(myname.lastname);
// }
// myfun2({firstname:"rahul", lastname:"singh"});
var myfun3 = function (myname) {
    console.log(myname.firstname);
    console.log(myname.lastname);
};
myfun3({ firstname: "rahul", lastname: "singh" });
var myfun4 = function (myname) {
    console.log(myname.firstname);
    console.log(myname.lastname);
};
myfun4({ firstname: "rahul", lastname: "singh" });
