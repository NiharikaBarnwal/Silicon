import java.util.Scanner;
public class gcd {
    public static void main(String[] args) {
        int i,m,n,gcd=1;
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        m= sc.nextInt();
        n= sc.nextInt();
        for(i=1;i<=m&&i<=n;i++){
            if(m%i==0 && n%i==0){
                gcd=i;
            }
        }
        System.out.println(gcd+" is the gcd of "+m+" and "+n);
    }
}
