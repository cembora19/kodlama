package giris4Kapsulleme;

public class test {
    public static void main(String[] args) {
        ogrenci ogrenci1=new ogrenci();
        ogrenci1.isimVer("cembora");
        ogrenci1.soyisimVer("ceylan");
        ogrenci1.dogumYiliVer(2000);
        ogrenci1.okulNumarasiVer("1919");

        /* Burada yeni değişken atamakla uğraşmadan kısa yol da yabaviliriz bunun için direkt sysout'un çıktı değerlerine fonksiyonun adını girmektir.
        String isim=ogrenci1.isimAl();
        String soyisim=ogrenci1.soyisimAl();
        int dogumYili=ogrenci1.dogumYiliAl();
        String okulNumarasi=ogrenci1.okulNumarasiAl();

        System.out.println("isim: "+isim);
        System.out.println("soyisim: "+soyisim);
        System.out.println("dogum yili: "+dogumYili);
        System.out.println("okul numarasi: "+okulNumarasi); */
        
        System.out.println("isim: "+ogrenci1.isimAl());
        System.out.println("soyisim: "+ogrenci1.soyisimAl());
        System.out.println("dogum yili: "+ogrenci1.dogumYiliAl());
        System.out.println("okul numarasi: "+ogrenci1.okulNumarasiAl());
       /* 
        ogrenci ogrenci2= new ogrenci(); kendimi denedim
        ogrenci2.isimVer("delmesnina");
        ogrenci2.soyisimVer("twitch");
        ogrenci2.dogumYiliVer(2020);
        ogrenci2.okulNumarasiVer("2020");
        System.out.println("yayınci kullanici adi: "+ogrenci2.isimAl());
        System.out.println("yayincinin kullandigi panel: "+ogrenci2.soyisimAl());
        System.out.println("yayincinin yayına katildiği yil: "+ogrenci2.dogumYiliAl());
        System.out.println("yayincinin yayina başladiği yil: "+ogrenci2.okulNumarasiAl());
        */
        ogrenci ogrenci2=new ogrenci("delmesnina", "twitch", 2020, "2020");
        System.out.println("yayınci kullanici adi: "+ogrenci2.isimAl());
        System.out.println("yayincinin kullandigi panel: "+ogrenci2.soyisimAl());
        System.out.println("yayincinin yayına katildiği yil: "+ogrenci2.dogumYiliAl());
        System.out.println("yayincinin yayina başladiği yil: "+ogrenci2.okulNumarasiAl());
}
}
