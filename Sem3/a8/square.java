package a8;

import java.util.Scanner;

class child extends Thread{
    int n,s=0;
    child(int a){
        n=a;
    }
    public void run(){
        do{
            int x=n%10;
            s=s+x;
            n=n/10;
        }while(n!=0);
        System.out.println("The sum of digits is:"+s);
    }
}

public class square {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number:");
        int m = sc.nextInt();
        int n=m*m;
        child c=new child(n);
        c.start();
        System.out.println("The square is:"+n);
    }
    
}
