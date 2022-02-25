// // Fonksiyon Tanımlama

// function merhaba(name="bilgi yok",age="bilgi yok"){
//     // if(typeof name==="undefined") name="bilgi yok";
//     // if(typeof age==="undefined") age="bilgi yok";
//     console.log(`isim:${name} yaş:${age}`);
// }

// merhaba("murat",25); // Fonksiyon Çağrısı(Function Call)
// merhaba();

// function square(x){
//     return x*x;
//     console.log("eyyo"); // Return'den sonra çalışmaz
// }
// function cube(x){
//     return x*x*x;
// }

// let a = cube(square(12));

// console.log(a);

// function merhaba(){
//     return "say hi";
// }
// console.log(merhaba());

// const merhaba=function(name){
//     console.log("say hi "+ name);
// }
// merhaba("bora");

//Immediately Invoked Function Expression (IIFE)

// (function(name){
//     console.log("say hi: "+name);
// })("bora");

const database={
    host: "localhost",
    add: function(){
        console.log("eklendi");
    },
    get:function(){
        console.log("elde edildi");
    },
    update:function(id){
        console.log(`id: ${id} güncellendi`);
    },
    delete:function(id){
        console.log(`id: ${id} silindi`);
    }
}

console.log(database.host);
database.add();
database.delete(10);