package giris13PolymorphismCokBicimlilik;

public class ogretimUyesi extends akademisyen{
    String unvan;
    public ogretimUyesi(String adSoyad, String eposta, String telefon, String bolum, String gorevler, String dersler, String unvan){
        super(adSoyad,eposta,telefon,bolum,gorevler,dersler);
        this.unvan=unvan;
    }
}
