package giris5KapsullemeSetGet;

public class test {
    public static void main(String[] args) {
        ogrenci ogrenci1=new ogrenci();
        ogrenci1.setIsim("cembora");
        ogrenci1.setSoyisim("ceylan");
        ogrenci1.setDogumYili(2000);
        ogrenci1.setOkulNumarasi("1919");
        ogrenci ogrenci2=new ogrenci();
        ogrenci2.setIsim("delmesnina");
        ogrenci2.setSoyisim("twtich");
        ogrenci2.setDogumYili(2020);
        ogrenci2.setOkulNumarasi("3131");
        System.out.println("isim: "+ogrenci1.getIsim()+" soyisim: "+ogrenci1.getSoyisim()+" dogum yili: "+ogrenci1.getDogumYili()+" okul numarasi: "+ogrenci1.getOkulNumarasi());
        System.out.println("isim: "+ogrenci2.getIsim()+" soyisim: "+ogrenci2.getSoyisim()+" dogum yili: "+ogrenci2.getDogumYili()+" okul numarasi: "+ogrenci2.getOkulNumarasi());
    }
}
