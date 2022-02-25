//Tek yorum satýrý için bunu kullanýyoruz.

/*

Bir de bunun arasýna istediðini yazaibliyoruz.

*/


/* veri tipleri
Deðiþkenler = char(karakter), int(tam sayý), float(ondalýk kesir), double(ondalýk kesir), short(int'in küçük deðerleri için), long(int'in büyük deðerleri için)
*/
/*
%d = int deðeri için printfde format belirleyici olarak kullanýlýyor.
ex: int x = 5 ;
printf("%d",x); = ekrana 5 deðerini basar.
*/

/*
%f = float ve double için format belirleyici olarak kullanýlýyor.
float f= 3.1;
double d= 4.21;
printf("%f %f", f, d); = ekrana 3.1   4.21 þeklinde çýktý basar. Deðiþkenleri verme sýrasýyla.
*/

/*
%c = karakterler için kullanýlýr.
char c1 = 'c';
printf("%c", c1) = ekrana c basar.
printf("%d", c1) = ekrana ASCII tablosundaki c'nin deðerini basar.
*/


/*
%s = karakter dizileri için kullanýluýr.("Cprogramlama")
printf("%s", Cprogramlama) = ekrana Cprogramlama yazar.
*/

/*
printf("Hello World!\tMerhabalar Efenim\n");
printf("Yavas yavas ogreniyoruz aga.");
*/


/*
"%5c %10d" printf e okutacaðýn zaman arasýna rakam koyarsan öncesindeki þey ile arasýna belli bir birim boþluk koyuyor.
*/


/* aritmatik iþlemler
x + y = x ile y toplanýr.
x - y = x'den y çýkartýlýr.
x * y = x ile y çarpýlýr.
x / y = x'i y'ye böler.
x % y = x'in y ile bölümünden kalaný verir.
+x = x sayýsýný artý ile çarpar.(sonuç deðiþmez.)
-x = x sayýsýný - ile çarpar.

*/


/* aritatik ifadeler
-x , x+y*z , (x/7) *y , (a % b) - (x*a +1) , 3 + 4 * 7 bu gibi ifadeler birer aritmatik ifadedir.
Ýþlem sýrasý:
tekli operatorler : (+) (-) (-x,+x) 1. öncelik. Kendi aralarýnda SAÐDAN SOLA.
ikili operatorler : * , / , % 2. öncelik. Kendi aralarýnda SOLDAN SAÐA.
ikili operatorler : + , - 3. öncelik. Kendi aralarýnda SOLDAN SAÐA.
Parantez içleri her zaman ilk planda yapýlýr.
*/


/*
	atamalar , artýrma , azaltma iþlemleri
	deðiþken(variable) = ifade (expression)
	int x = 15;
	int y = 14;

	x = y;
	y = x;
	Ex:
	int x = 6;
	int y = 7;
	x = y; (y'nin deðeri x'e atanýyor. x = 7 , y = 7
	y = x + 1 (x + 1 hesaplanýyor(8) ve y'ye atýlýyor. x = 7 , y = 8)


	x = x + 1;
	Atama durumunda ilk baþta sað taraftaki kýsým hesaplanýr. Sonra atama yapýlýr.

	x + 1 = 2; (Bu tür þeyler C de geçerli deðildir. Sol taraftaki deðer sað taraftaki bir deðiþken olmalýdýr.

	arttýrma - azaltma iþlemleri

	i = i + 1;
	Bunun eþiti ayný zamanda i +=1 (i = i + 1 ile aynýdýrlar)
	(deðiþken iþlem=ifade)

	i'yi arttýrmak için C'de i++ ve ++i gibi þeyler bulunuyor.

	postfix : i++;
	prefix : ++i;

	Arasýndaki fark : 
	int i = 4;

	printf("%d", i++);
	Ekrana 4 deðerini bastýrýr.
	Çünkü bu postfix halinde(i++) i'nin arttýrmadan önceki deðerini (4) kullanýyor bir sonraki satýrda arttýrýyor.
	
	printf("%d", ++i);
	Ekrana 5 deðerini bastýrýr.
	Çünkü by prefix halinde(++i) i'nin artmýþ deðerini (5) kullanýyor bir sonraki satýrda arttýrýyor.
	i-- ve --i ayný þekilde çalýþýr.



	(deðiþken iþlem = ifade) 

	i = i % a;
	Bu iþlemi formaya sokarsak --> i %= a;
	Ex: i = i * (a + 1); --> i *= (a + 1);



	Ýç içe atamalar

	i = b = c = 0;
	Bu þekilde bir atama varsa en saðdan baþlayarak c'ye 0 atýyor. Daha sonra b'ye c'nýn deðerini atýyor(0). b = 0. Daha sonra i'ye b'nin deðerini atýyor(0). i = 0 oldu. 
	Sonuç olarak en saðdan baþlayarak yapýlan atamalar sonucunda,

	i = 0;
	b = 0;
	c = 0;
	
	Bu þekilde atamalarda en saðdan baþlayarak iþlemler yapýlýr(Ancak programcýlar bunun daha karmaþýk versiyonlarýný tercih etmezler).




	Tür Dönüþümleri

	Otomatik Dönüþümler

	Örneðin bir aritmatik ifade de bütün tipler ayný deðil. Mesela 3.2/2 dediðimiz zaman float ve int beraber oluyor. Burada sonuç 1.6 çünkü otomatik dönüþüm yapýlýyor.
	2 sayýsý floata çevirilip 2.0 oluyor.

	Otomatik Dönüþüm Çizelgesi:

	Char--->Short--->Int--->Float--->Double--->Long Double

	Mesela int ve double beraberse herkes double'a otomatik olarak çevrilir.(Saða doðru öncelik artýyor)


	Manuel Dönüþümler

	Otomatik dönüþümlerin olmadýðý yerde kendimiz yapabiliriz.

	3.2 sayýsýný int yapmak istersek ---> (int) 3.2 ---> 3 sonucunu verir.(Kesirli kýsmý atar)



	Giriþ - Çýkýþ Fonksiyonlarý
	scanf - printf

	float bir deðer olan x'i ekrana bastýrmak için printf("%f", x); yapýyoruz. Benzer bir þekilde, float olan bir x tanýmlayýp daha sonra bu deðeri kullanýcýdan almak istersek de
	scanf("%f", &x); þeklinde yazýyoruz. "&"(ampersant þeklinde oku) iþareti x'e kullanýcýdan gelen deðeri atadýðýmýzý gösteriyor. Diðer format  belirleyicileri printf ile aynýdýr.
	


	bool veritipi - true(doðru) ya da false(yanlýþ)



	Mantýksal Operatörler

	Mantýksal ifadeler doðru ise true
	Mantýksal ifadeler yanlýþ ise false
	Ayný zamanda bütün 0 olmayan sayýlar (1,132) true deðer sayýlýr. 0 ise false deðerdir.

	Mantýksal Operatörler

	<	 =  küçük müdür? a < b þeklinde
	>	 =  büyük müdür? a > b þeklinde
	<=	 =  küçük ya da eþit midir? a <= b þeklinde
	>=   =  büyük ya da eþit midir? a >= b þeklinde
	==	 =  eþit midir? a == b þeklinde
	!=   =  eþit deðil midir? a != b þeklinde


	Mantýksal Baðlaçlar

	Bir çok mantýksal ifadeyi iþlemi baðlayan araçlardýr.

	&&	=  mantýksal and ("ve") baðlacý. true && true && false gibi baðlanabilir. && olduðu cümlenin true olmasý için bütün ifadelerin true olmasý gerekir. Eðer bu cümlenin içerisinde
	bir tane bile false varsa o mantýksal cümle false(yanlýþ) olur.

	||  =  mantýksal or ("ya da") baðlacý. true && true && false gibi baðlanabilir. || olduðu cümlenin true olmasý için en az bir ifadenin true olmasý gerekir. Eðer mantýksal or (||)
	ile baðlanmýþ cümlenin içinde bütün ifadeler false ise o mantýksal cümle false(yanlýþ) olur.

	!   =  mantýksal not ("deðili") operatörü. Doðru olan (true) mantýksal ifadeyi yanlýþ (false) yapar. Yanlýþ olan (false) olan mantýksal ifadeyi	doðru (true) yapar.


	Þartlý Cümleler

	a = x > y ? x: y;  ----> Eðer x büyüktür y ise(?) hepsinin eþiti x olur. Deðilse(:) hepsinin eþiti y olur. like if-else.
*/



/*
Bir fonksiyon return gördüðü anda sonlanýr. Alttaki kodlarýn vs bir önemli yoktur.
*/




