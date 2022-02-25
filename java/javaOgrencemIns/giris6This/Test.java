package giris6This;

public class Test {
    public static void main(String[] args) {
        Ogrenci ogrenci1=new Ogrenci("cembora", "ceylan", 2000, "1919");
        ogrenci1.setIsim("cem bora");
        Ogrenci ogrenci2=new Ogrenci("delmesnina", "twitch", 2020, "3131");
        ogrenci2.setIsim("Del mes Nina");
        System.out.println("ogrenci 1 isim: "+ogrenci1.getIsim());
        System.out.println("ogrenci 2 isim: "+ogrenci2.getIsim());
    }
}
