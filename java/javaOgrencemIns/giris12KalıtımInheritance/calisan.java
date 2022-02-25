package giris12KalıtımInheritance;

public class calisan {
    protected String adSoyad, eposta, telefon;
    static int girisSayisi=0;
    public calisan(){

    }
    public calisan(String adSoyad, String eposta, String telefon){
        this.adSoyad=adSoyad;
        this.eposta=eposta;
        this.telefon=telefon;
    }
    public void giris(){
        System.out.println(this.adSoyad+" giris yapti");
    }
    public static int giris1(){
        return ++calisan.girisSayisi;
    }
    public String getAdSoyad(){
        return adSoyad;
    }
    public void setAdSoyad(String adSoyad){
        this.adSoyad=adSoyad;
    }
    public String getEposta(){
        return eposta;
    }
    public void setEposta(String eposta){
        this.eposta=eposta;
    }
    public String getTeleon(){
        return telefon;
    }
    public void setTelefon(String telefon){
        this.telefon=telefon;
    }
}
