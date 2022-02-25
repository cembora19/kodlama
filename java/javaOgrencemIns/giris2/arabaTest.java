package giris2; //constructor

public class arabaTest {
    public static void main(String[] args) {
        araba araba1=new araba("toyota","supra",1992,"kırmızı");
        System.out.println(araba1.marka);
        System.out.println(araba1.model);
        System.out.println(araba1.year);
        System.out.println(araba1.renk); 
        araba araba2=new araba("nissan", "gtrr35");
        System.out.println(araba2.marka+araba2.model);

    }
}
