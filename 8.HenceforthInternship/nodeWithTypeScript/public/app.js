"use strict";
var __awaiter = (this && this.__awaiter) || function (thisArg, _arguments, P, generator) {
    function adopt(value) { return value instanceof P ? value : new P(function (resolve) { resolve(value); }); }
    return new (P || (P = Promise))(function (resolve, reject) {
        function fulfilled(value) { try { step(generator.next(value)); } catch (e) { reject(e); } }
        function rejected(value) { try { step(generator["throw"](value)); } catch (e) { reject(e); } }
        function step(result) { result.done ? resolve(result.value) : adopt(result.value).then(fulfilled, rejected); }
        step((generator = generator.apply(thisArg, _arguments || [])).next());
    });
};
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
// const mongoose = require("mongoose");
const mongoose_1 = __importDefault(require("mongoose"));
mongoose_1.default.set("strictQuery", true);
// mongoose.set('autoIndex', false);
function main() {
    return __awaiter(this, void 0, void 0, function* () {
        yield mongoose_1.default.connect("mongodb://127.0.0.1:27017/mylearn");
    });
}
main()
    .then(() => {
    console.log("connected");
})
    .catch((err) => console.log(err));
const kittySchema = new mongoose_1.default.Schema({
    name: {
        type: String,
        // index: true,
        // unique: true,
        required: true,
    },
    age: {
        type: Number,
        // index: true,
        // unique: true,
        required: true,
    },
});
const Kitten = mongoose_1.default.model("Kitten", kittySchema);
//indexing in mongoose and no need of it mongoose do it automatically
//   const myindexing=async()=>{
//       await Kitten.createIndexes([{name:1,unique:true}])
//   }
//   myindexing().then(()=>{console.log("finished index");});
const f1 = new Kitten({ name: "rahul3", age: 30 });
const f2 = new Kitten({ name: "rahul4", age: 40 });
//datainserted and finding data
// const saving = async () => {
//   await Kitten.insertMany([f1, f2]);
// };
// saving()
//   .then(async () => {
//     console.log("insert");
//     let data = await Kitten.find({});
//     console.log(data);
//   })
//   .catch((err) => console.log(err));
//data updating
// const update = async () => {
//   await Kitten.updateMany({ name: "rahul3" }, { $set: { age: 25 } });
// };
// update()
//   .then(async () => {
//     console.log("data updated");
//     let data = await Kitten.find({});
//     console.log(data);
//   })
//   .catch((err) => console.log(err));
//data deletion
// const deletion = async () => {
//   await Kitten.deleteMany({ name: "rahul3" });
// };
// deletion()
//   .then(async () => {
//     console.log("data deleted");
//   })
//   .catch((err) => console.log(err));
//mongoose methods
//find method
// const mymethod1 = async () => {
//   let data = await Kitten.find({ name: "rahul4" }, (err: any, data: object) => {
//     if (err) {
//       console.log(err);
//     } else {
//       console.log(data);
//     }
//   });
// };
// mymethod1()
//   .then(async () => {
//     console.log("data find");
//   })
//   .catch((err) => {
//     console.log(err);
//   });
//inserting data
// Kitten.insertMany([f1, f2])
//   .then(function () {
//     console.log("Data inserted"); // Success
//   })
//   .catch(function (error) {
//     console.log(error); // Failure
//   });
//findone
// Kitten.findOne({ name: "rahul4" }, (err: any, data: any) => {
//   if (err) {
//     console.log(err);
//   } else {
//     console.log(data);
//   }
// });
//findbyid
// Kitten.findById("63b2a177006feca3a3a67dc4", (err: any, data: any) => {
//   if (err) {
//     console.log(err);
//   } else {
//     console.log(data);
//   }
// });
//findOneand update
// Kitten.findOneAndUpdate(
//   { name: "rahul3" },
//   { $set: { age: 20 } },
//   { returnDocument: "after" },
//   (err: any, data: any) => {
//     if (err) {
//       console.log(err);
//     } else {
//       console.log(data);
//     }
//   }
// );
//findById and update
// Kitten.findByIdAndUpdate(
//   "63b2a177006feca3a3a67dc4",
//   { name: "ashish3" },
//   { returnDocument: "after" },
//   (err, data) => {
//     if (err) {
//       console.log(err);
//     } else {
//       console.log(data);
//     }
//   }
// );
//findOne and replace
// Kitten.findOneAndReplace(
//   { name: "rahul4" },
//   { name: "rajat", age: "2000", year: 100 },
//   { returnDocument: "after" },
//   (err, data) => {
//     if (err) {
//       console.log(err);
//     } else {
//       console.log(data);
//     }
//   }
// );
//findOne and delete
// Kitten.findOneAndDelete({ name: "rajat" }, (err: any, data: any) => {
//   if (err) {
//     console.log(err);
//   } else {
//     console.log(data);
//   }
// });
//findOne and remove
// Kitten.findOneAndRemove({ name: "ashish3" }, (err: any, data: any) => {
//   if (err) {
//     console.log(err);
//   } else {
//     console.log(data);
//   }
// });
//findbyId and delete
// Kitten.findByIdAndDelete("63b2a3b4d88d5027127e8c7c", (err: any, data: any) => {
//   if (err) {
//     console.log(err);
//   } else {
//     console.log(data);
//   }
// });
//findbyId and remove
// Kitten.findByIdAndRemove("63b2a3b4d88d5027127e8c7d", (err: any, data: any) => {
//   if (err) {
//     console.log(err);
//   } else {
//     console.log(data);
//   }
// });
//aggregation
// 1;
// const myaggregate = async () => {
//   const aggregate1 = await Kitten.aggregate([
//     {
//       $match: { $or: [{ name: "rahul3" }, { name: "rahul4" }] },
//     },
//     {
//       $group: {
//         _id: "$name",
//         totalage: { $sum: "$age" },
//       },
//     },
//     {
//       $sort: { totalage: 1 },
//     },
//   ]);
//   console.log(aggregate1);
//   for await (const doc of aggregate1) {
//     console.log(doc.totalage);
//   }
// };
// myaggregate().then(() => {
//   console.log("finished query1");
// });
//2
// const myaggregate = async () => {
//   const aggregate1 = await Kitten.aggregate([
//     {
//       $match: { name: "rahul3" },
//     },
//     {
//       $project: { age: 1, _id: 0 },
//     },
//     {
//       $sort: { totalage: 1 },
//     },
//   ]);
//   console.log(aggregate1);
//   for await (const doc of aggregate1) {
//     console.log(doc.age);
//   }
// };
// myaggregate().then(() => {
//   console.log("finished query1");
// });
//3
// const myaggregate = async () => {
//   const aggregate1 = await Kitten.aggregate([
//     {
//       $match: { $or: [{ name: "rahul3" }, { name: "rahul4" }] },
//     },
//     {
//       $group: {
//         _id: "$name",
//         totalage: { $count: {} },
//         name: { $last: "$age" },
//       },
//     },
//     {
//       $addFields: {
//         avgGrade: "minimum",
//       },
//     },
//     {
//       $sort: { totalage: 1 },
//     },
//     // {
//     //   $count: "totaldocs",
//     // },
//   ]);
//   console.log(aggregate1);
//   for await (const doc of aggregate1) {
//     console.log(doc.totalage);
//   }
// };
// myaggregate().then(() => {
//   console.log("finished query1");
// });
//4
// const myaggregate = async () => {
//   const aggregate1 = await Kitten.aggregate([
//     {
//       $match: { $or: [{ name: "rahul3" }, { name: "rahul4" }] },
//     },
//     {
//       $lookup: {
//         from: "mycomputer",
//         localField: "name",
//         foreignField: "_id",
//         as: "moviedetails",
//       },
//     },
//     // {
//     //     $out:"mycomputer"
//     // }
//   ]);
//   console.log(aggregate1);
//   for await (const doc of aggregate1) {
//     console.log(doc.moviedetails[0].avgGrade);
//     console.log(doc.moviedetails[0].name);
//   }
// };
// myaggregate().then(() => {
//   console.log("finished query1");
// });
//5
// const myaggregate=async()=>{
//     const aggregate1= await Kitten.aggregate([
//         {
//             $match:{$or:[{name:"rahul3"},{name:"rahul4"}]}
//         },
//         {
//             $unwind:"$friendlist"
//         }
//     ])
//     console.log(aggregate1)
//     for await (const doc of aggregate1) {
//         console.log(doc.friendlist)
//     }
// }
// myaggregate().then(()=>{
//     console.log("finished query1");
// })
//6
// const myaggregate=async()=>{
//     const aggregate1= await Kitten.aggregate([
//         {
//             $match:{$or:[{name:"rahul3"},{name:"rahul4"}]}
//         },
//         {
//             $facet:{
//             wishlist1:[
//                 {$unwind:"$friendlist"},
//                 {$sort:{age:1}}
//             ],
//             wishlist2:[
//                 {$unwind:"$friendlist"},
//                 {$sort:{age:-1}},
//                 {$project:{age:1}}
//             ]}
//         }
//     ])
//     console.log(aggregate1)
//     for await (const doc of aggregate1) {
//         console.log(doc)
//     }
// }
// myaggregate().then(()=>{
//     console.log("finished query1");
// })
//7
// const myaggregate=async()=>{
//     const aggregate1= await Kitten.aggregate([
//         {
//             $match:{_id:1}
//         },
//         {
//             $redact: {
//               $cond: {
//                   if: { $gt:[{$size:{$setIntersection: ["$tags",["si","stw"]]}},0]},
//                   then: "$$DESCEND",
//                   else: "$$PRUNE"
//                 }
//             }
//         }
//     ])
//     console.log(aggregate1)
//     for await (const doc of aggregate1) {
//         console.log(doc)
//     }
// }
// myaggregate().then(()=>{
//     console.log("finished query1");
// })
