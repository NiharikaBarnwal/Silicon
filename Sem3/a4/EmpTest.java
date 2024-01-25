package a4;

import java.util.Scanner;

class Employee{
    private String empName;
    private String empNo;
    private int dependentCnt;
    Employee(String name, String eno, int depcnt){
        empName=name;
        empNo=eno;
        dependentCnt=depcnt;
    }
    void showEmpDetails(){
        System.out.println(empNo+"\t"+empName);
    }
    int depCount(){
        return dependentCnt;
    }
}

public class EmpTest {
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
            String m= sc.nextLine();
            System.out.print("Enter the independent count: ");
            int s= sc.nextInt();
            e[i]=new Employee(x, m, s);
        }
        System.out.println("EMPNO\tNAME");
        for(int i=0;i<n;i++){
            if(e[i].depCount()>2)
                e[i].showEmpDetails();
        }
    }    
}
