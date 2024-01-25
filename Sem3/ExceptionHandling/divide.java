package ExceptionHandling;

import java.util.Scanner;

public class divide {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two number: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        try{
            int x=a/(a-b);
            System.out.println(x);
        }
        catch(ArithmeticException e){
            e.printStackTrace();
        }
    }
    
}
