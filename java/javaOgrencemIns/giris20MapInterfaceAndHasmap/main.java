package giris20MapInterfaceAndHasmap;
import java.util.*;
public class main {
    public static void main(String[] args) {
        //clear() map içinde bulunan tüm değerleri siler
        //get(object key) anahtara karşılık gelen objeyi döndürür
        //put(object key, object value)anahtar-deger iliskisini kayıt eder
        HashMap baskent=new HashMap();
        baskent.put("turkiye", "ankara");
        baskent.put("fransa", "paris");
        baskent.put("ingiltere", "londra");
        System.out.println(baskent.get("turkiye"));
        Set s=baskent.entrySet();
        Iterator i=s.iterator();
        while(i.hasNext()){
            Map.Entry item=(Map.Entry)i.next();
            System.out.println(item.getKey()+"-> "+item.getValue());
        }
    }
}
