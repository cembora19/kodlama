package giris12KalıtımInheritance;

public class guvenlik extends memurlar {
    String belge;
    public guvenlik(String adSoyad, String eposta, String telefon, String departman, String mesai, String belge){
        super(adSoyad,eposta,telefon,departman,mesai);
        this.belge=belge;
    }
}
