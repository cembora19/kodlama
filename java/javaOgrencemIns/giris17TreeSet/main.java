package giris17TreeSet;
import java.util.*;
public class main {
    public static void main(String[] args) {
        TreeSet tree=new TreeSet(); //kendi içerisinde sıralarma yapar ve null eklemeye çalıştığın zaman hata verir
        tree.add(10);
        tree.add(1);
        tree.add(2);
        tree.add(5);
        tree.add(10);
        tree.forEach(item->System.out.println(item+" "));
    }
}
