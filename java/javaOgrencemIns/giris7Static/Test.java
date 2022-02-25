package giris7Static;


public class Test {
    public static void main(String[] args) {
        Ogrenci.setOkul("karabük üniversitesi");
        Ogrenci ogrenci1=new Ogrenci();
        Ogrenci ogrenci2=new Ogrenci();
        ogrenci1.setIsim("cembora");
        ogrenci2.setIsim("delmesnina");
        System.out.println("1. ad + okul: "+ogrenci1.getIsim()+" "+Ogrenci.getOkul());
        System.out.println("2. ad + okul: "+ogrenci2.getIsim()+" "+Ogrenci.getOkul());
    }
}
