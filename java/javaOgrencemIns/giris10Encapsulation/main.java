package giris10Encapsulation;
public class main {
    public static void main(String[] args) {
        Book b1=new Book("fahreneit", 380, "idk", "ben bilmem");
        b1.setNumberOfPage(200);
        System.out.println(b1.getNumberOfPage());
        Book b2=new Book("lord of the", 500, "peter jackson", "cembora");
        b2.setName("lord of the rings");
        System.out.println(b2.getName());
    }
}
