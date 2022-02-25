package giris11SiniflarArasiIliskiler;

public class main {
    public static void main(String[] args) {
        //Sınıflar Arası İlişkiler
        //-Bağımlı (Dependency) "uses a" A used B
        //-Birleştirme (Composition) "has a"
        //-Kalıtım (Inheritance) "is a"
        A a=new A();
        B b=new B();
        /* Dependency
        a.run(b);
        */
        /* Composition
        a.b=b; */
        
    }
}
