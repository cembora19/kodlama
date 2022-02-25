package giris13PolymorphismCokBicimlilik;

public class asistan extends akademisyen{
    protected String yuksekLisans;
    public asistan(){
        
    }
    public asistan(String adSoyad, String eposta, String telefon, String bolum, String gorevler, String dersler, String yuksekLisans){
        super(adSoyad, eposta, telefon, bolum, gorevler, dersler);
        this.yuksekLisans=yuksekLisans;
    }
}
