package giris22Generic;
import java.util.*;
public class main {
    public static void main(String[] args) {
        ArrayList<Integer> a1=new ArrayList<>();
        a1.add(1);
        a1.add(12);
        a1.add(3);
        for(Integer obj : a1){
            System.out.println(obj.doubleValue());
        }
        HashMap<Integer,String> c=new HashMap<>();
        c.put(1, "adana");
        c.put(6, "ankara");
        c.put(34, "istanbul");
        for(Integer key : c.keySet()){
            System.out.println("key: "+key+" value: "+c.get(key));
        }
        for(String value : c.values()){
            System.out.println(value);
        }
    }
}
