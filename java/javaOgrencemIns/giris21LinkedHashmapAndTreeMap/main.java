package giris21LinkedHashmapAndTreeMap;
import java.util.*;
public class main {
    public static void main(String[] args) {//treemap stringe göre yapıyor
        LinkedHashMap ogr=new LinkedHashMap();
        ogr.put("ali", 90);
        ogr.put("veli", 80);
        ogr.put("ahmet", 75);
        Set set=ogr.entrySet();
        Iterator i=set.iterator();
        while(i.hasNext()){
            Map.Entry item=(Map.Entry) i.next();
            System.out.println(item.getKey()+"->"+item.getValue());
        }
    }
}
