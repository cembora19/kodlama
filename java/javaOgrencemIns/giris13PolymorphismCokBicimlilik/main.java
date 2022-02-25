package giris13PolymorphismCokBicimlilik;

public class main {
    public static void main(String[] args) {
      //  calisan c1=new akademisyen("cembora", "@gmail.com", "+9032452", "pceng", "enayilik", "lolkolasi");
       // c1.giris();
        akademisyen a1=new akademisyen("cembora", "zort", "yok", "pcmu", "aglamak", "data");
        ogretimUyesi o1=new ogretimUyesi("enayi", "cem", "bora", "ceylan", "aglayarak", "zurna", "durum");
        memurlar m1=new memurlar("keko", "cem", "bora", "ceylan", "mesai");
        calisan[] girisListesi={a1,o1,m1};
        calisan.listele(girisListesi);
    }
}
