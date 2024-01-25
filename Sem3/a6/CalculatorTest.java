package a6;

import java.util.Scanner;

interface Calculator{
    double add();
    double sub();
    double mul();
    double div();
}
class DemoCalculator implements Calculator{
    double a,b;
    DemoCalculator(double n1, double n2){
        a=n1;
        b=n2;
    }
    public double add(){
        return a+b;
    }
    public double sub(){
        return a-b;
    }
    public double mul(){
        return a*b;
    }
    public double div(){
        return a/b;
    }
}
public class CalculatorTest {
    public static void main(String[] args) {
        int op;
        Scanner sc= new Scanner(System.in);
        DemoCalculator c = new DemoCalculator(4, 2);
        System.out.println("Option: 1=add 2=sub 3=mul 4=div");
        System.out.print("Enter the option: ");
        op= sc.nextInt();
        switch (op) {
            case 1:
                System.out.println("The addition is: "+c.add());
                break;
            case 2:
                System.out.println("The subtraction is: "+c.sub());
                break;
            case 3:
                System.out.println("The multiplication is: "+c.mul());
                break;
            case 4:
                System.out.println("The division is: "+c.div());
                break;
            default:
                System.out.println("Invalid option.");
                break;
        }
    }
    
}
