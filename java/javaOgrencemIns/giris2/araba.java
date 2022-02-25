package giris2;

public class araba {
    String marka;
    String model;
    int year;
    String renk;
    public araba(){

    }
    public araba(String m,String mo){
        marka=m;
        model=mo;
    }
    //yapılandırıcı constructor
    public araba(String m,String mo,int y,String r){
        marka=m;
        model=mo;
        year=y;
        renk=r;
       // System.out.println(marka+" "+model+" "+year+" "+renk);
    }
}
