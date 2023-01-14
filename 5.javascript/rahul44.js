console.log("this is working");

let name1 = "harry bhai";
name1 = undefined;
if (name1 != undefined) {
    throw new Error("this is not undefined mr.");
    // console.log("i am inside if block");
}
else {
    console.log("i am inside else block");
}

try {
    console.log("i m inside try block");
    // fuyfuyfjyvj
    // functionrunning();
    null.console
} catch (error) {
    console.log("i am inside catch block");
    console.log(error);
    console.log(error.name);
    console.log(error.message);
} finally {
    console.log("i am inside finally block");
}
