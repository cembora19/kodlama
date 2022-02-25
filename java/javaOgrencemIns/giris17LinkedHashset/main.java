package giris17LinkedHashset;
import java.util.*;
public class main {
    public static void main(String[] args) {
        LinkedHashSet gunler=new LinkedHashSet();
        gunler.add("pazartesi");
        gunler.add("sali");
        gunler.add("carsamba");
        gunler.add("persembe");
        gunler.add("cuma");
        gunler.add("cumartesi");
        gunler.add("pazar");
        gunler.add(null);
        gunler.add("pazartesi");
        gunler.remove("cuma");
        gunler.forEach(item->System.out.println(item+" "));
    }
}
