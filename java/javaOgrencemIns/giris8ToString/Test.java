package giris8ToString;

public class Test {
    public static void main(String[] args) {
        Ogrenci.setOkul("karabük üniversitesi");
        Ogrenci ogrenci1=new Ogrenci("cembora", "ceylan", 2000, "1919");
        Ogrenci ogrenci2=new Ogrenci("delmesnina", "twitch", 2020, "3131");
        ogrenci1.bilgiYazdir();
        System.out.println();
        ogrenci2.bilgiYazdir();
        System.out.println();
       
        System.out.println(ogrenci1.bilgileriAl());
        System.out.println(ogrenci2.bilgileriAl());
        System.out.println();

        System.out.println(ogrenci1);
        System.out.println(ogrenci2);
    }
}
