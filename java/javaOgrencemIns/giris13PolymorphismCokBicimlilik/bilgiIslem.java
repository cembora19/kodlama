package giris13PolymorphismCokBicimlilik;

public class bilgiIslem extends memurlar {
    String gorev;
    public bilgiIslem(String adSoyad, String eposta, String telefon, String departman, String mesai, String gorev){
        super(adSoyad, eposta, telefon, departman, mesai);
        this.gorev=gorev;
    }
}
