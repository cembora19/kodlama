package  giris13PolymorphismCokBicimlilik;
;

public class akademisyen extends calisan{
    String bolum, gorevler;
    String dersler;
    public akademisyen(){
        
    }
    public akademisyen(String adSoyad, String eposta, String telefon, String bolum, String gorevler, String dersler){
        super(adSoyad,eposta,telefon);
        this.bolum=bolum;
        this.gorevler=gorevler;
        this.dersler=dersler;
    }
    public void derseGir(){
        System.out.println("derse girildi");
    }
    public void giris(){
        System.out.println(this.adSoyad+" A kapisindan giris yapti");
    }
}
