package giris12KalıtımInheritance;

public class memurlar extends calisan {
    String departman,mesai;
    public memurlar(){
        
    }
    public memurlar(String adSoyad, String eposta, String telefon, String departman, String mesai){
        super(adSoyad,eposta,telefon);
        this.departman=departman;
        this.mesai=mesai;
    }
}
