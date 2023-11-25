package a3;

class Employee {
    String empName;
    int empNo;
    double basicSal;
    double da;
    double hra;
    double grossSal;
    Employee(String name, int n, double sal){
        empName=name;
        empNo=n;
        basicSal=sal;
    }
    void calGrossSal(){
        da=basicSal*0.2;
        hra=basicSal*0.1;
        grossSal=basicSal+da+hra;
    }
    void showEmpDetails(){
        System.out.println(empName+"\t"+empNo+"\t"+basicSal+"\t"+da+"\t"+hra+"\t"+grossSal);
    }
}
public class Emp {
    public static void main(String[] args) {
        Employee e1=new Employee("Ram", 1, 50000);
        Employee e2=new Employee("Shyam", 2, 40000);
        e1.calGrossSal();
        e2.calGrossSal();
        System.out.println("NAME\tEMPNO\tBASIC\tDA\tHRA\tGROSS");
        e1.showEmpDetails();
        e2.showEmpDetails();
    }
}
