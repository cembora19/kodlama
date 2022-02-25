// While Döngüleri

// let i=0;
// while(i<10){
//     console.log(i);
//     i++; // i+=1
// }

//Break ve Continue

// let i=0;
// while(i<10){
//     console.log(i);
//     if(i==5){
//         break;
//     }
//     i++;
// }


// let i=0;
// while(i<10){
//     console.log(i);
//     if(i==3 || i==5){
//         i++;
//         continue; 
//     }
//     i++;
// }


// Do While 

// let i=0;
// do{
//     console.log(i);
//     i++;
// }while(i<10)



//For Döngüleri

const langs=["css","js","c"];

// let index=0;

// while(index<langs.length){
//     console.log(langs[index]);
//     index++;
// }

// for(let index=0;index<langs.length;index++){
//     console.log(langs[index]);
// }

// langs.forEach(function(lang){
//     console.log(lang);
// });

// const users=[
//     {name:"bora",age:20},
//     {name:"delmesnina",age:19}
// ];

// const names=users.map(function(user){
//     return user.name;
// });
// const ages=users.map(function(user){
//     return user.age;
// });
// console.log(names);
// console.log(ages);

const user = {
    name:"bora",
    age:20,
};

for(let key in user){
    console.log(key,user[key]);
}