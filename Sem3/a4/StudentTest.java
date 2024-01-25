package a4;

import a4.Student.Address;

class Student{
    String name;
    int roll;
    static int n=0;
    Address address=new Address();
    class Address{
        String city;
        int pin;
    }
    Student(String x, int r, String c, int p){
        System.out.println("Creating student number "+(++n));
        name=x;
        roll=r;
        address.city=c;
        address.pin=p;
    }
    void showStudentDetails(){
        System.out.println(name+"\t"+roll+"\t"+address.city+"\t"+address.pin);
    }
}

public class StudentTest {
    public static void main(String[] args) {
        Student s1 =new Student("Rita", 1, "Patna",801503);
        Student s2 =new Student("Sita", 2, "Patna",801503);
        System.out.println("NAME\tROLLNO\tCITY\tPIN");
        s1.showStudentDetails();
        s2.showStudentDetails();
    }
}
