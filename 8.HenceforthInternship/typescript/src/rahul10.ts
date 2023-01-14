interface mypersonaldata {
  name: string;
  age: number;
  address: string;
}
function mydetailsdata(myobj: mypersonaldata) {
  console.log(myobj.name);
  console.log(myobj.age);
  console.log(myobj.address);
  return myobj;
}
console.log(mydetailsdata({ name: "ashish", age: 5, address: "asgarpur" }));
export {};
