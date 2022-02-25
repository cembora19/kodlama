package proje2;

public class lab2 {
    public static void main(String[] args) {
        genel kullanici=new genel();
        kullanici.name="cem";
        kullanici.socialSecurityNumber=19;
        kullanici.wage=20;
        kullanici.workingHours=13;
        kullanici.displayInfo();
        kullanici.displaySalary();
    }
}
