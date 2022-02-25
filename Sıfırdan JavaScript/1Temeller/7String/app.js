let value;

const firstName="cembora";
const lastName="ceylan";

const twitch="del,mes,nina";

value= firstName+lastName;
value= firstName+" "+lastName;

value="cembora";
value+=" ceylan";

value=firstName.length;
value=firstName.concat(" ",lastName," ","delmesnina"); //firstName + " " + ...

value=firstName.toLowerCase();//Küçük Harfe Çeviriyor
value=firstName.toUpperCase();//Büyük Harfe Çeviriyor

value=firstName[0];
value=firstName[4];
value=firstName[2];
value=firstName[firstName.length-1];


//Index Of

value=firstName.indexOf("c");
value=firstName.indexOf("r");
value=firstName.indexOf("x");// İçinde X olmadığı için -1 olarak gösteriyor


//Char At

value=firstName.charAt(0);
value=firstName.charAt(firstName.length-1);


//Split
value=twitch.split(",");

//Replace
value=twitch.replace("mes","nina");

//Includes
value=twitch.includes("del");
value=twitch.includes("gaysamet");



console.log(value);