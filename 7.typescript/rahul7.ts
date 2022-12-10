let myfun = (firstname:string,lastname:string) => {
    console.log(firstname);
    console.log(lastname);
}
myfun("rahul", "singh");

// let myfun2 = (myname) => {
//     console.log(myname.firstname);
//     console.log(myname.lastname);
// }
// myfun2({firstname:"rahul", lastname:"singh"});

let myfun3 = (myname:{firstname:string,lastname:string}) => {
    console.log(myname.firstname);
    console.log(myname.lastname);
}
myfun3({ firstname: "rahul", lastname: "singh" });

interface Mynamepersonal{
    firstname: string,
    lastname: string
}
let myfun4 = (myname:Mynamepersonal) => {
    console.log(myname.firstname);
    console.log(myname.lastname);
}
myfun4({ firstname: "rahul", lastname: "singh" });