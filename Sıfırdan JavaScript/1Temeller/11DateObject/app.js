let value;

const now =new Date(); // Şu anki zamanı almamızı sağlar
const date1=new Date("10-17-2000 06:19:23");
const date2=new Date("October 17 2000");
const date3=new Date("10/17/2000");

value=date1;
value=date1.getMonth(); // Ocak ayını 0 olarak aldığı için 9 olarak görünüyor
value=date1.getDate();
value=date1.getDay();
value=date1.getHours();
value=date1.getMinutes();
value=date1.getSeconds();
value=date1.getMilliseconds();


date1.setMonth(7);
date1.setDate(3);
date1.setFullYear(2001);
date1.setHours(13);
date1.setMinutes(45);
date1.setSeconds(11);
value=date1;


console.log(value);