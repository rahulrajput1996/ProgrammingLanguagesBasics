let name1 = [1, 2, "mohan", 3, 10, 20];

for (let i = 0; i < name1.length; i++) {
    const element = name1[i];
    console.log(element);
}

name1.forEach(element => {
    console.log(element);
});
name1.forEach(function radha(na, ha, pa) {
    console.log(na, ha, pa);
});

let name2 = 3;
while (name2 < 10) {
    console.log(name2);
    name2++;
}

do {
    console.log(name2);
    name2++;
} while (name2 > 20);

name2 = 1;
for (name2; name2 <= 10; name2++) {
    console.log(name2);
    if (name2 == 7) {
        console.log("i am break");
        continue;
    }
}
console.log(name2);

let employee = {
    name: "don bhai",
    salary: 2000,
    "channel baba": " code with harry",
};
for (const data in employee) {
        console.log(data);
        console.log(employee[data]);
}