package giris14AbstractionSoyutlama;

public class main {
    public static void main(String[] args) {
    // akademisyen a1=new akademisyen("cembora", "zort", "yok", "pcmu", "aglamak", "data");
    ogretimUyesi o1=new ogretimUyesi("enayi", "cem", "bora", "ceylan", "aglayarak", "zurna", "durum");
    memurlar m1=new memurlar("keko", "cem", "bora", "ceylan", "mesai");  
    asistan as1=new asistan("a", "b", "c", "d", "e", "f", "d"); 
    as1.derseGir();
    }
}
