import Mobile2, { Parent } from "./mod1";

export class Child extends Parent {
  getdata2() {
    console.log("i am a child class");
  }
}

export default class Smartphone extends Mobile2 {
  getversion2() {
    console.log("i am a smartphone class");
  }
}
