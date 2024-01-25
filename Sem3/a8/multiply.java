package a8;

import java.util.Scanner;

class odd extends Thread{
    int a[],b[],c[];
    odd(int m[],int n[]){
        a=m;
        b=n;
        c= new int[a.length];
    }
    public void run(){
        for(int i=0;i<a.length;i++){
            if(i%2!=0){
                c[i]=a[i]*b[i];
            }
            else{
                c[i]=-1;
            }
        }
    }
}
class even extends Thread{
    int a[],b[],c[];
    even(int m[],int n[]){
        a=m;
        b=n;
        c= new int[a.length];
    }
    public void run(){
        for(int i=0;i<a.length;i++){
            if(i%2==0){
                c[i]=a[i]*b[i];
            }
            else{
                c[i]=-1;
            }
        }
    }
}

public class multiply {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the size of array:");
        int n= sc.nextInt();
        int a[]= new int[n];
        int b[]= new int[n];
        System.out.println("Enter the first array: ");
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        System.out.println("Enter the second array: ");
        for(int i=0;i<n;i++){
            b[i]=sc.nextInt();
        }
        odd o = new odd(a,b);
        even e = new even(a,b);
        o.start();
        e.start();
        try{
            o.join();
            e.join();
        }
        catch(Exception ae){
            System.out.println("Exception has been caught");
        }
        for(int i=0;i<a.length;i++){
            if(e.c[i]!=-1){
                System.out.println("Even"+e.c[i]);
            }
            if(o.c[i]!=-1){
                System.out.println("Odd"+o.c[i]);
            }
        }

    }
    
}
