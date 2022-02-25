const chalk = require('chalk')
module.exports = (client) => {

    //WATCHING: !ping izliyor
//LISTENING: !ping dinliyor
//PLAYING: !ping oynuyor
// \n alt satıra geçirtti diğer cümleyi

client.user.setActivity("!ping",{ type: "PLAYING"} );

var logmesajı = chalk.bold.white("Oynuyor kısmı basari ile ayarlandi. \n")+
                chalk.italic.grey("escortbot : " + client.user.presence.game )

    console.log(logmesajı)
}

