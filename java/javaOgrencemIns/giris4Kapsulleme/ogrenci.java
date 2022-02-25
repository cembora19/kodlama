package giris4Kapsulleme;

public class ogrenci {
    private String isim;
    private String soyisim;
    private int dogumYili;
    private String okulNumarasi;
    public ogrenci(){

    }
    public ogrenci(String i,String s,int d,String o){
        isim=i;
        soyisim=s;
        dogumYili=d;
        okulNumarasi=o;
    }
    public void isimVer(String i){
        if(i.length()<3){
            System.out.println("yanlis deger girildi. sistem otomatikman adinizi kullanici olarak belirlemiştir.");
            isim="kullanici";
        }
        else{
            isim=i;
        }
    }
    public String isimAl(){
        return isim;
    }
    public void soyisimVer(String s){
        if(s.length()<3){
            System.out.println("yanlis deger girildi. sistem otomatikman soyadinizi kullanici olarak belirlemiştir");
            soyisim="kullanici";
        }
        else{
            soyisim=s;
        }
    }
    public String soyisimAl(){
        return soyisim;
    }
    public void dogumYiliVer(int d){
        if(d<1900 || d>2017){
            System.out.println("yanlis deger girildi. sistem yasinizi 0 olarak belirlemiştir");
            dogumYili=0;
        }
        else{
            dogumYili=d;
        }
    }
    public int dogumYiliAl(){
        return dogumYili;
    }
    public void okulNumarasiVer(String o){
        if(o.length()!=4){
            System.out.println("yanlis deger girildi. sistem numaranizi 0 olarak belirlemişsir");
            okulNumarasi="0";
        }
        else{
            okulNumarasi=o;
        }
    }
    public String okulNumarasiAl(){
        return okulNumarasi;
    }
}
