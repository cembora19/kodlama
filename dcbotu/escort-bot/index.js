//-Değişkenler-
const Discord = require("discord.js");
const chalk = require("chalk");
const Advanced = require('discordjs-advanced');
                         
const client = new Advanced.Client({
    token: "NzMwMDcwNTA3MjY0OTMzOTk5.XwSLow.X6bPY_exl9HeQaZUgeBb9UPbwXU", 
    prefix: "!", 
    sahip: ["287290619263451148"], 
    komutDosya: "komutlar",
    veritabanı : {
        dosya:"database.json"
    },
    varsayılanKomutlar: ['yardım'], 
    everyoneKapat: true
    
});
                     
client.eventYükle("olaylar");

client.kategoriYükle([ 
    ['eglence','Eglence Komutları'],
    ['moderasyon','Moderasyon Komutları'],
    ['kullanıcı','Kullanıcı Komutları'],
    ['genel','Genek Komutlar'] 
]);
//-Bot Hazır Mesajı-
var log = chalk.red("Bot başarı ile giriş yaptı.")
var log01 = chalk.yellow("Bot başarı ile giriş yaptı.")


client.on("ready",() => {
 console.log(log)
 console.log(log01)
});

var prefix = "!"; 

client.on("message", message => {

    if(message.content.toLowerCase() === prefix + "hentai") {
        message.react("🤬")
        message.channel.send("burası porno sitesi mi orospu çocu.").then(message => {
            message.react("😇")
        })

    }
})

var prefix = "!";

client.on("message", message => {
    if(message.content.toLowerCase() === prefix + "yarrak") {
        message.react("🍆")
        message.channel.send("boyundan büyük işlere kalkışma.").then(message => {
            message.react("😉")
        })
    }
})

var prefix = "!";

client.on("message", message => {

    if(message.content.toLowerCase() === prefix + "deneme") {
        message.react("🤩")
        setTimeout(function () {
            message.react("🥳")
        },1 * 5000)
        message.channel.send("5 saniye sonda üstteki yazıya '🥳' tepkisi eklenecektir.").then(message => {
            message.react("👍")
        })
    }
})
    
    var prefix = "!";

client.on("message", message => {
    if(message.content.toLowerCase() === prefix + "mangalar3") {
        message.react("👎")
        message.channel.send("<@140406003907821568> kafanı sikeyim gel.").then(message => {
            message.react("🇦")
            message.react("🇱")
            message.react("🇪")
            message.react("🇻")
            message.react("🇮")
            message.react("🔥")
        })
    }
})

 client.on("message", message => {
    if(message.content.toLowerCase() === prefix + "sikimescortbotu") {
        message.react("🍆")
        message.channel.send("senin karnın aç galiba.").then(message => {
            message.react("😉")
        })
    }
})              
                
client.on("message", message => {
    if(message.content.toLowerCase() === prefix + "bünyo") {
        message.react("👌")
        message.channel.send("<@201403230721146880> Bünyamin Abi, Cem Bora senin lezzetli çiğ köfteni yemek istiyor.").then(message => {
            message.react("😉")
        })
    }
})  

var prefix = "!";

client.on("message", message => {
    if(message.content.toLowerCase() === prefix + "ciri") {
        message.react("👎")
        message.channel.send("<@642319359691456524> AGA  TASMAYI ÇIKARABİLDİYSEN Bİ UĞRA YANIMIZA YA.").then(message => {
            message.react("🐕‍🦺")
            message.react("🇹")
            message.react("🇦")
            message.react("🇸")
            message.react("🇲")
            message.react("🅰️")
            message.react("🦮")

        })
    }
})

var prefix = "!";

client.on("message", message => {
    if(message.content.toLowerCase() === prefix + "triss") {
        message.react("👎")
        message.channel.send("<@587594979698802688> AGA  TASMAYI ÇIKARABİLDİYSEN Bİ UĞRA YANIMIZA YA.").then(message => {
            message.react("🐕‍🦺")
            message.react("🇹")
            message.react("🇦")
            message.react("🇸")
            message.react("🇲")
            message.react("🅰️")
            message.react("🦮")



        })
    }
})



client.giris(); 
            





