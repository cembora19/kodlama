package proje1;

public class proje1 {
    public static void main(String[] args) {
        System.out.println("eyyo");
        calisan cem=new calisan();
        cem.boy=180;
        cem.kilo=70;
        cem.yas=21;
        System.out.println("cem boy "+cem.boy+"cem yas "+cem.yas+"cem kilo "+cem.kilo);
        cem.yemek();
        System.out.println("cem boy "+cem.boy+"cem yas "+cem.yas+"cem kilo "+cem.kilo);
        cem.maas=100;
        cem.zam(25);
        cem.zam(30);
        System.out.println("yeni maas "+cem.maas);
    }
    

}
