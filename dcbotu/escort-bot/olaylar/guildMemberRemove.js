//guildMemberRemove = bir kişi sunucuya çıktığında çalışacak fonksiyon

module.exports = (client, member) => {

	var kanal = client.channels.get("730265608217821265")

	kanal.send(` :eggplant: | **${member.user.username}** adlı kişi sunucudan çıkış yaptı.`)


	}