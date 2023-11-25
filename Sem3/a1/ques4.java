import java.util.Scanner;
public class ques4 {
    public static void main(String[] args) {
        int i,m,n,count=0;
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the range: ");
        m=sc.nextInt();
        n=sc.nextInt();
        System.out.println("The numbers are:");
        for(i=m;i<=n;i++){
            if(i%3==0 && i%5==0){
                System.out.print(i+" ");
                count++;
            }
        }
        System.out.println("\nThere are "+count+" numbers between "+m+" and "+n+" which are divisible by 3 and 5.");
    }
}
