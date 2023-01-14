interface mytype {
  name: string;
  getresult: () => void | string | boolean;
}

let myobj: mytype = {
  name: "rahul",
  getresult: function () {
    return this.name;
  },
};

console.log(myobj.getresult());
export {};
