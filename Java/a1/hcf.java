import java.util.Scanner;
public class hcf {
    public static void main(String[] args) {
        int i,m,n,gcd,r;
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        m= sc.nextInt();
        n= sc.nextInt();
        if(m<n){
            gcd=n;
            r=m;
        }
        else{
            gcd=m;
            r=n;
        }
        do{
            i=gcd;
            gcd=r;
            r=i%gcd;
        }while(r!=0);
        System.out.println(gcd+" is the gcd of "+m+" and "+n);
    }
    
}
