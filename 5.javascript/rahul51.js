console.log("working");
function fruititerator(myarr2) {
    let index = 0;
    return {
        next: function () {

            if (index < myarr1.length) {
                return {
                    value: myarr2[index++],
                    done: false
                }
            }
            else {
                return {
                    done:true
                }
            }
        }
    }
}

const myarr1 = ["apple", "banana", "grapes", "guavava", "bhindi"];
console.log(myarr1);

const fruits = fruititerator(myarr1);
console.log(fruits.next());
console.log(fruits.next().value);
console.log(fruits.next().done);
console.log(fruits.next());
console.log(fruits.next());
console.log(fruits.next());