// console.log("working");

class library {

    constructor(booklist) {
        this.mybooklist = booklist;
        this.issuebooklist = {};
    }

    issuebook(name, book) {

        let keys = Object.keys(this.issuebooklist)

        if (this.mybooklist.includes(book) && (!keys.includes(book))) {
            this.issuebooklist[book] = name;
            console.log("book is issued")
        }

        if (!this.mybooklist.includes(book)) {
            console.log("book is not available in library")
        }

        if (keys.includes(book)) {
            console.log(`book is already given to ${this.issuebooklist[book]}`)
        }
    }

    returnbook(book) {

        let keys = Object.keys(this.issuebooklist)

        if (!this.mybooklist.includes(book)) {
            console.log("book was not available in library then how u can return")
        }
        else if (keys.includes(book)) {

            delete this.issuebooklist[book];
            console.log("successfully returned book");
        }
        else if (!keys.includes(book)) {
            console.log('book is not isuued still')
        }


    }
}

bookobj = new library(["c", "c++", "python", "html"]);
console.log(bookobj.mybooklist)

bookobj.issuebook('raja', "c++");
bookobj.issuebook('pyara', "java");
bookobj.issuebook('chand', "c++");


bookobj.returnbook("java")
bookobj.returnbook("c")
bookobj.returnbook("c++")
bookobj.returnbook("c++")


