// Elementi Id'e Göre Seçme

let element;


element=document.getElementById("todo-form");

element=document.getElementById("tasks-title");


// Element Class'a GÖre Seçme

element=document.getElementsByClassName("list-group-item");
element=document.getElementsByClassName("card-header");


// Element Tag'e Göre Seçme

element=document.getElementsByTagName("li");


//Query Selector - Css Selector

element=document.querySelector("#todo-form");
element=document.querySelector("#tasks-title");


element=document.querySelector(".list-group-item");

element=document.querySelector("li");
element=document.querySelector("div");



// QuerySelectorAll - Tüm Elementleri Seç

element=document.querySelectorAll(".list-group-item"); // Node List

element.forEach(function(el){
    console.log(el);
})



console.log(element);