//Tek yorum sat�r� i�in bunu kullan�yoruz.

/*

Bir de bunun aras�na istedi�ini yazaibliyoruz.

*/


/* veri tipleri
De�i�kenler = char(karakter), int(tam say�), float(ondal�k kesir), double(ondal�k kesir), short(int'in k���k de�erleri i�in), long(int'in b�y�k de�erleri i�in)
*/
/*
%d = int de�eri i�in printfde format belirleyici olarak kullan�l�yor.
ex: int x = 5 ;
printf("%d",x); = ekrana 5 de�erini basar.
*/

/*
%f = float ve double i�in format belirleyici olarak kullan�l�yor.
float f= 3.1;
double d= 4.21;
printf("%f %f", f, d); = ekrana 3.1   4.21 �eklinde ��kt� basar. De�i�kenleri verme s�ras�yla.
*/

/*
%c = karakterler i�in kullan�l�r.
char c1 = 'c';
printf("%c", c1) = ekrana c basar.
printf("%d", c1) = ekrana ASCII tablosundaki c'nin de�erini basar.
*/


/*
%s = karakter dizileri i�in kullan�lu�r.("Cprogramlama")
printf("%s", Cprogramlama) = ekrana Cprogramlama yazar.
*/

/*
printf("Hello World!\tMerhabalar Efenim\n");
printf("Yavas yavas ogreniyoruz aga.");
*/


/*
"%5c %10d" printf e okutaca��n zaman aras�na rakam koyarsan �ncesindeki �ey ile aras�na belli bir birim bo�luk koyuyor.
*/


/* aritmatik i�lemler
x + y = x ile y toplan�r.
x - y = x'den y ��kart�l�r.
x * y = x ile y �arp�l�r.
x / y = x'i y'ye b�ler.
x % y = x'in y ile b�l�m�nden kalan� verir.
+x = x say�s�n� art� ile �arpar.(sonu� de�i�mez.)
-x = x say�s�n� - ile �arpar.

*/


/* aritatik ifadeler
-x , x+y*z , (x/7) *y , (a % b) - (x*a +1) , 3 + 4 * 7 bu gibi ifadeler birer aritmatik ifadedir.
��lem s�ras�:
tekli operatorler : (+) (-) (-x,+x) 1. �ncelik. Kendi aralar�nda SA�DAN SOLA.
ikili operatorler : * , / , % 2. �ncelik. Kendi aralar�nda SOLDAN SA�A.
ikili operatorler : + , - 3. �ncelik. Kendi aralar�nda SOLDAN SA�A.
Parantez i�leri her zaman ilk planda yap�l�r.
*/


/*
	atamalar , art�rma , azaltma i�lemleri
	de�i�ken(variable) = ifade (expression)
	int x = 15;
	int y = 14;

	x = y;
	y = x;
	Ex:
	int x = 6;
	int y = 7;
	x = y; (y'nin de�eri x'e atan�yor. x = 7 , y = 7
	y = x + 1 (x + 1 hesaplan�yor(8) ve y'ye at�l�yor. x = 7 , y = 8)


	x = x + 1;
	Atama durumunda ilk ba�ta sa� taraftaki k�s�m hesaplan�r. Sonra atama yap�l�r.

	x + 1 = 2; (Bu t�r �eyler C de ge�erli de�ildir. Sol taraftaki de�er sa� taraftaki bir de�i�ken olmal�d�r.

	artt�rma - azaltma i�lemleri

	i = i + 1;
	Bunun e�iti ayn� zamanda i +=1 (i = i + 1 ile ayn�d�rlar)
	(de�i�ken i�lem=ifade)

	i'yi artt�rmak i�in C'de i++ ve ++i gibi �eyler bulunuyor.

	postfix : i++;
	prefix : ++i;

	Aras�ndaki fark : 
	int i = 4;

	printf("%d", i++);
	Ekrana 4 de�erini bast�r�r.
	��nk� bu postfix halinde(i++) i'nin artt�rmadan �nceki de�erini (4) kullan�yor bir sonraki sat�rda artt�r�yor.
	
	printf("%d", ++i);
	Ekrana 5 de�erini bast�r�r.
	��nk� by prefix halinde(++i) i'nin artm�� de�erini (5) kullan�yor bir sonraki sat�rda artt�r�yor.
	i-- ve --i ayn� �ekilde �al���r.



	(de�i�ken i�lem = ifade) 

	i = i % a;
	Bu i�lemi formaya sokarsak --> i %= a;
	Ex: i = i * (a + 1); --> i *= (a + 1);



	�� i�e atamalar

	i = b = c = 0;
	Bu �ekilde bir atama varsa en sa�dan ba�layarak c'ye 0 at�yor. Daha sonra b'ye c'n�n de�erini at�yor(0). b = 0. Daha sonra i'ye b'nin de�erini at�yor(0). i = 0 oldu. 
	Sonu� olarak en sa�dan ba�layarak yap�lan atamalar sonucunda,

	i = 0;
	b = 0;
	c = 0;
	
	Bu �ekilde atamalarda en sa�dan ba�layarak i�lemler yap�l�r(Ancak programc�lar bunun daha karma��k versiyonlar�n� tercih etmezler).




	T�r D�n���mleri

	Otomatik D�n���mler

	�rne�in bir aritmatik ifade de b�t�n tipler ayn� de�il. Mesela 3.2/2 dedi�imiz zaman float ve int beraber oluyor. Burada sonu� 1.6 ��nk� otomatik d�n���m yap�l�yor.
	2 say�s� floata �evirilip 2.0 oluyor.

	Otomatik D�n���m �izelgesi:

	Char--->Short--->Int--->Float--->Double--->Long Double

	Mesela int ve double beraberse herkes double'a otomatik olarak �evrilir.(Sa�a do�ru �ncelik art�yor)


	Manuel D�n���mler

	Otomatik d�n���mlerin olmad��� yerde kendimiz yapabiliriz.

	3.2 say�s�n� int yapmak istersek ---> (int) 3.2 ---> 3 sonucunu verir.(Kesirli k�sm� atar)



	Giri� - ��k�� Fonksiyonlar�
	scanf - printf

	float bir de�er olan x'i ekrana bast�rmak i�in printf("%f", x); yap�yoruz. Benzer bir �ekilde, float olan bir x tan�mlay�p daha sonra bu de�eri kullan�c�dan almak istersek de
	scanf("%f", &x); �eklinde yaz�yoruz. "&"(ampersant �eklinde oku) i�areti x'e kullan�c�dan gelen de�eri atad���m�z� g�steriyor. Di�er format  belirleyicileri printf ile ayn�d�r.
	


	bool veritipi - true(do�ru) ya da false(yanl��)



	Mant�ksal Operat�rler

	Mant�ksal ifadeler do�ru ise true
	Mant�ksal ifadeler yanl�� ise false
	Ayn� zamanda b�t�n 0 olmayan say�lar (1,132) true de�er say�l�r. 0 ise false de�erdir.

	Mant�ksal Operat�rler

	<	 =  k���k m�d�r? a < b �eklinde
	>	 =  b�y�k m�d�r? a > b �eklinde
	<=	 =  k���k ya da e�it midir? a <= b �eklinde
	>=   =  b�y�k ya da e�it midir? a >= b �eklinde
	==	 =  e�it midir? a == b �eklinde
	!=   =  e�it de�il midir? a != b �eklinde


	Mant�ksal Ba�la�lar

	Bir �ok mant�ksal ifadeyi i�lemi ba�layan ara�lard�r.

	&&	=  mant�ksal and ("ve") ba�lac�. true && true && false gibi ba�lanabilir. && oldu�u c�mlenin true olmas� i�in b�t�n ifadelerin true olmas� gerekir. E�er bu c�mlenin i�erisinde
	bir tane bile false varsa o mant�ksal c�mle false(yanl��) olur.

	||  =  mant�ksal or ("ya da") ba�lac�. true && true && false gibi ba�lanabilir. || oldu�u c�mlenin true olmas� i�in en az bir ifadenin true olmas� gerekir. E�er mant�ksal or (||)
	ile ba�lanm�� c�mlenin i�inde b�t�n ifadeler false ise o mant�ksal c�mle false(yanl��) olur.

	!   =  mant�ksal not ("de�ili") operat�r�. Do�ru olan (true) mant�ksal ifadeyi yanl�� (false) yapar. Yanl�� olan (false) olan mant�ksal ifadeyi	do�ru (true) yapar.


	�artl� C�mleler

	a = x > y ? x: y;  ----> E�er x b�y�kt�r y ise(?) hepsinin e�iti x olur. De�ilse(:) hepsinin e�iti y olur. like if-else.
*/



/*
Bir fonksiyon return g�rd��� anda sonlan�r. Alttaki kodlar�n vs bir �nemli yoktur.
*/




