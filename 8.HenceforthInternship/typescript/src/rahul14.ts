function users(data: object): object {
  return data;
}
console.log(
  users({
    name: "rahul",
    description: "developer",
  })
);

function users2<T>(data: T): T {
  return data;
}
console.log(
  users2<object>({
    name: "ashish",
    description: "testing",
  })
);

export {};
