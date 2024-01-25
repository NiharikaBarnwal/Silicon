package a7;

import java.util.Scanner;

public class exception {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers:");
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        do{
            try{
                System.out.println(n1/n2);
            }
            catch(ArithmeticException e){
                System.out.println("Division by Zero");
                System.out.print("Enter a non zero divisor: ");
                n2 = sc.nextInt();
            }
        }while(n2==0);
        System.out.println(n1/n2);
    }
}
