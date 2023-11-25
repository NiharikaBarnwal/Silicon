
import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        int n,i,flag=0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number:");
        n=sc.nextInt();
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            System.out.println(n+" is a composite");
        }
        else{
            System.out.println(n+" is a prime");
        }
    }
    
}
