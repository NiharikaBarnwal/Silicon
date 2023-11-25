package a3;

import java.util.Scanner;

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
public class Emp_arr {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of employees: ");
        int n=sc.nextInt();
        Employee e[]=new Employee[n];
        for(int i=0;i<n;i++){
            System.out.println("Enter the detail of employee "+(i+1));
            System.out.print("Enter the name: ");
            sc.nextLine();
            String x= sc.nextLine();
            System.out.print("Enter the employee number: ");
            int m= sc.nextInt();
            System.out.print("Enter the basic salary: ");
            Double s= sc.nextDouble();
            e[i]=new Employee(x, m, s);
            e[i].calGrossSal();
        }
        System.out.println("NAME\tEMPNO\tBASIC\tDA\tHRA\tGROSS");
        for(int i=0;i<n;i++){
            e[i].showEmpDetails();
        }
    }
}
