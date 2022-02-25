let value;

const programmer ={
    name : "cembora",
    age:"20",
    email:"cemboraceylan@gmail.com",
    langs:["js","c"],
    
    address:{
        city:"istanbul",
        street:"kartal"
    },

    work: function(){
        console.log("ugauga");
    }
    
}

value=programmer;
value=programmer.email; //Genel Kullanım
value=programmer["email"];
value=programmer.langs;
value=programmer.address.city;
value=programmer.work();

const programmers=[
    {name:"cembora",age:20},
    {name:"delmesnina",age:19}
];

value=programmers[0].name;

console.log(value);