import java.util.Scanner;
import java.lang.Math;

public class exp {
    public static void main(String[] args) {
        double i,j, n, x,val=0,y,k=1;
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter x and n: ");
        x= sc.nextDouble();
        n= sc.nextDouble();
        for(i=1;i<=n;i++){
            for(j=1;j<i;j++){
                k=k*j;
            }
            y=(double)Math.pow(x,(i-1));
            val=val+(y/k);
        }
        System.out.println(val);
    }
}
