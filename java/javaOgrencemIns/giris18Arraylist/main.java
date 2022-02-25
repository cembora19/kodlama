package giris18Arraylist;
import java.util.*;
public class main {
    public static void main(String[] args) {
        //ArrayList<E>
        //LinkedList<E>
        //Vector<E>
        ArrayList country=new ArrayList();//tekrar eden değerleri yazabiliyoruz
        country.add("corum");
        country.add("karabuk");
        country.add("istanbul");
        country.add("corum");
        country.add(0, "edirne");
        country.remove(4);
        Iterator itr=country.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
        System.out.println();
        country.forEach(item->System.out.println(item+" "));
    }
}
