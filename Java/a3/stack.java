package a3;
import java.util.Scanner;
class demo{
    int max=10;
    int top;
    int stack[];
    demo(int m){
        max=m;
        top=-1;
        stack=new int[max];
    }
    void push(int temp){
        if(top==max-1){
            System.out.println("Stack overflow.");
        }
        else{
            top++;
            stack[top]=temp;
        }
    }
    int pop(){
        int x=-1;
        if(top==-1){
            System.out.println("Stack underflow.");
        }
        else{
            x=stack[top];
            top--;
        }
        return x;
    }
    void display(){
        System.out.println("The stack is:");
        for(int i=0;i<=top;i++){
            System.out.print(stack[i]+" ");
        }
        System.out.println();
    }
}

public class stack {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int opt,x;
        System.out.print("Enter the size of stack:");
        int n= sc.nextInt();
        demo s1 = new demo(n);
        System.out.println("Options: 1=push 2=pop 3=display 4=exit");
        do{
            System.out.print("Enter the option:");
            opt= sc.nextInt();
            switch(opt){
                case 1:
                    System.out.print("Enter the data:");
                    x= sc.nextInt();
                    s1.push(x);
                    break;
                case 2:
                    s1.pop();
                    break;
                case 3:
                    s1.display();
                    break;
                case 4:
                    System.out.println("Thank you!");
                    break;
                default:
                    System.out.println("Invalid option.");
                    break;
            }
        }while(opt!=4);
    }
    
}
