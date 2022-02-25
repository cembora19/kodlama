let value;

const numbers=[43,19,23,34,41,8,11];
// const nubmers2=new Array(1,2,3,4,5,6);
const langs=["del","mes","nina"];
const a=["eyyo",31,null,undefined,3.14];

value=numbers.length;
value=numbers[0];
value=numbers[2];
value=numbers[numbers.length-1];

// Herhangi bir indeksteki değeri değiştirme

numbers[2]=1000;
value=numbers;

// index of

value=numbers.indexOf(1000);

// Arrayin Sonuna Değer Ekleme - push

numbers.push(2000);
value=numbers;

// Arrayin Başına Değer Ekleme - unshift

numbers.unshift(1500);
value=numbers;

// Sonundan Değer Atma

numbers.pop();
value=numbers;

// Başından Değer Atma

numbers.shift();
value=numbers;

// Belli Bir Indexten Belli Bir Indexe Kadar Atmak

numbers.splice(0,3);
value=numbers; 

// Reverse

numbers.reverse();
value=numbers;

value=numbers.sort(function(x,y){ //Küçükten Büyüğe
    return x-y;
});

value=numbers.sort(function(x,y){ //Büyükten Küçüğe
    return y-x;
})

value=numbers;


console.log(value);