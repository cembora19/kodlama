const name = "cem bora ceylan";
const department ="Yayıncı";
const salary = "100";

//const a = "İsim: " +name + "\n" + "Departman: " + department + "\n" + "Maaş: " + salary;


//const a = `İsim: ${name}\nDepartman: ${department}\nMaaş: ${salary}`;

// const html = "<ul> " +
//              "<li>" + name + "</li>" + 
//             "<li>" +department +"</li>" +
//             "<li>" + salary + "</li>" +
//             "</ul>";


            //console.log(a);

function a(){
    return "hiyoutube";
}            

const html= `
<ul>
    <li>${name}</li>
    <li>${department}</li>
    <li>${salary}</li>
    <li>${10/4}</li>
    <li>${a()}</li>

</ul>
`; 

document.body.innerHTML = html;