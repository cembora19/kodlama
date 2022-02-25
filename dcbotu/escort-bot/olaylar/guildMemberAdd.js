//guildMemberAdd = bir kişi sunucuya girdiğinde çalışacak fonksiyon


module.exports = (client, member) => {

	var kanal = client.channels.get("730265608217821265")

	console.log(member.user.bot)
	if(member.user.bot === true) {
		kanal.send("Bu kişi bir bot olarak giriş yaptı.")
	}

	kanal.send(` :eggplant: | <@${member.id}> adlı kişi sunucuya giriş yaptı.`)


	}
