package giris12KalıtımInheritance;

public class main {
    public static void main(String[] args) {
        calisan c1=new calisan();
        c1.giris();
        akademisyen a1=new akademisyen();
        a1.giris();
        memurlar m1=new memurlar();
        m1.giris();
        System.out.println(akademisyen.giris1());
        System.out.println(memurlar.giris1());
        asistan as1=new asistan();
        as1.derseGir();
        akademisyen a2=new akademisyen("cembora", "cembora@gmail.com", "+90412432", "pcmuh", "yazilim", "op");
        System.out.println(a2.getAdSoyad());
        ogretimUyesi o1=new ogretimUyesi("zort", "zurna", "+31", "tavukdoner", "aglamak", "ekmekarasi", "cigkofte");
        o1.giris();
        a1.giris();
    }
}
