package a8;

import java.util.Scanner;

class odd extends Thread{
    int m,n;
    odd(int a, int b){
        m=a;
        n=b;
    }
    public void run(){
        for(int i=m; i<=n;i++){
            if(i%2!=0){
                System.out.println("Child:"+i);    
            }
        }
    }
}

public class even {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int m= sc.nextInt();
        System.out.print("Enter second number: ");
        int n= sc.nextInt();
        odd c= new odd(m,n);
        c.start();
        for(int i=m; i<=n;i++){
            if(i%2==0){
                System.out.println("Parent:"+i);
            }
        }
    }
    
}
