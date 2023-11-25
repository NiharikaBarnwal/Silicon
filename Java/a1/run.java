import java.util.Scanner;

public class run {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        int n1, n2,x,ch;
        System.out.print("Input the 1st number:");
        n1=sc.nextInt();
        System.out.print("Input the 2nd number:");
        n2=sc.nextInt();
        System.out.println("Options: 1:sum 2:difference 3:multiply 4:divide 5:exit");
        do{
        System.out.print("Enter the option:");
        ch=sc.nextInt();
        switch(ch){
            case 1:
                x=n1+n2;
                System.out.println("The result is "+x);
                break;
            case 2:
                x=n1-n2;
                System.out.println("The result is "+x);
                break;
            case 3:
                x=n1*n2;
                System.out.println("The result is "+x);
                break;
            case 4:
                x=n1/n2;
                System.out.println("The result is "+x);
                break;
            case 5:
                System.out.println("Thank you!");
                break;
            default:
                System.out.println("Not a valid option");
        }
        }while(ch!=5);
    }
}
