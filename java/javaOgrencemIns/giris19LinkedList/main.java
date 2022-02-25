package giris19LinkedList;
import java.util.*;
public class main {
    public static void main(String[] args) {//silme için linked list dava avantajlı
        LinkedList list=new LinkedList();
        list.add("elma");
        list.add("mandalina");
        list.add("karpuz");
        list.add(2, "kavun");
        list.forEach(i->System.out.println(i+" "));
    }
}
