package giris13PolymorphismCokBicimlilik;

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
    public static void listele(calisan[] girisYapanlar){
        for(calisan c1: girisYapanlar){
            // c  calisan c1=new akademisyen("cembora", "@gmail.com", "+9032452", "pceng", "enayilik", "lolkolasi");
            c1.giris();
        }
    }
}
