package giris16setInterfaceAndHashset;
import java.util.*;
public class main {
    public static void main(String[] args) {
        //HashSet<E>
        //LinkedHashset<E>
        //TreeSet<E>

        HashSet h=new HashSet();
        h.add("12 Str");
        h.add(12);
        h.add(12);//aynı elemandan 1 den fazla olamaz
        h.add(12.0);
        h.add(true);
        h.add(null);
        h.remove(12);
        Iterator itr=h.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
        h.forEach(item->System.out.println(item+ " "));
    }
}
