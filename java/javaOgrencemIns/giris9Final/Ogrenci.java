package giris9Final;

public class Ogrenci {
    public static final String okul="karabuk üniversitesi"; // genelde final yaptıklarının değişken adı büyük olur
    private String isim;
    private String soyisim;
    private int dogumYili;
    private String okulNumarasi;
    public Ogrenci(){
        
    }

    public Ogrenci(String isim,String soyisim,int dogumYili,String okulNumarasi){
        this.isim=isim;
        this.soyisim=soyisim;
        this.dogumYili=dogumYili;
        this.okulNumarasi=okulNumarasi;
    }
    public void setIsim(String isim){
        this.isim=isim;
    }
    public String getIsim(){
        return isim;
    }
    public void setSoyisim(String soyisim){
        this.soyisim=soyisim;
    }
    public String getSoyisim(){
        return soyisim;
    }
    public void setDogumYili(int dogumYili){
        this.dogumYili=dogumYili;
    }
    public int getDogumYili(){
        return dogumYili;
    }
    public void setOkulNumarasi(String okulNumarasi){
        this.okulNumarasi=okulNumarasi;
    }
    public String getOkulNumarasi(){
        return okulNumarasi;
    }
    public void bilgiYazdir(){
        System.out.println("isim: "+isim);
        System.out.println("soyisim: "+soyisim);
        System.out.println("dogum yili: "+dogumYili);
        System.out.println("okul: "+okul);
        System.out.println("okul numarasi: "+okulNumarasi);
    }
    public String bilgileriAl(){
        return "isim: "+isim+" soyisim: "+soyisim+" dogum yili: "+dogumYili+" okul: "+okul+" okul numarasi: "+okulNumarasi;
    }
    @Override
    public String toString() {
        // TODO Auto-generated method stub
        return "isim: "+isim+" soyisim: "+soyisim+" dogum yili: "+dogumYili+" okul: "+okul+" okul numarasi: "+okulNumarasi;
    }
}
