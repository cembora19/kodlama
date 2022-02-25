package giris1;
public class arabaTest {
    public static void main(String[] args) {
        araba araba1=new araba();
        araba1.marka="toyota";
        araba1.model="SUPRAAAAAAAAAA";
        araba1.renk="red";
        araba1.year=1992;
        araba araba2=new araba();
        araba2.marka="nissan";
        araba2.model="gtr r35";
        araba2.renk="beyaz";
        araba2.year=2020;
        System.out.println(araba2.marka+araba2.model+araba2.renk+araba2.year);
    }
}
