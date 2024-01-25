package a4;
class Num{
    int n1,n2;
    Num(int a, int b){
        n1=a;
        n2=b;
    }
    int GCD(){
        int gcd=1;
        for(int i=1;i<=n1&&i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
    int LCM(){
        int lcm;
        lcm = (n1 > n2) ? n1 : n2;
        while(true) {
            if( lcm % n1 == 0 && lcm % n2 == 0 ) {
                break;
            }
            ++lcm;
        }
        return lcm;
    }
}
public class gcd_lcm {
    public static void main(String[] args) {
        Num n=new Num(4,6);
        System.out.println("GCD of "+n.n1+" and "+n.n2+" is "+n.GCD());
        System.out.println("LCM of "+n.n1+" and "+n.n2+" is "+n.LCM());
    }
}
