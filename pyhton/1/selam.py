dilekce="""
                                                tarih: {}
t.c
{} universitesi
{} fakultesi dekanligi

fakulteniz {} bolumu {} numaralı ogrencisiyim. ekte sunduğum belge belirtilen mazeratim geregince {} egitim ogretim yılı {}. yarılyılında ogretime ara izni (kayıt donddurma) istiyorum

bilgilerinizi ve geregini arz ederim

imza

ad              :{}
soyad           :{}
tc kimlik no    :{}
adres           :{}
tel             :{}
ekler           :{}                                                """

tarih = input("tarih: ")
üniversite = input("üniversite adı: ")
fakülte = input("fakülte adı: ")
bölüm = input("bölüm adı: ")
öğrenci_no = input("öğrenci no. :")
öğretim_yılı = input("öğretim yılı: ")
yarıyıl = input("yarıyıl: ")
ad = input("öğrencinin adı: ")
soyad = input("öğrencinin soyadı: ")
tc_kimlik_no = input("TC Kimlik no. :")
adres = input("adres: ")
tel = input("telefon: ")
ekler = input("ekler: ")

print(dilekce.format(tarih,üniversite,fakülte,bölüm,öğrenci_no,öğretim_yılı,yarıyıl,ad,soyad,tc_kimlik_no,adres,tel,ekler))