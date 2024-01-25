package a7;
import a7.mypack.Display;
public class driver {
    public static void main(String[] args) {
        int a[]={1,2,3};
        String b[]={"hello","hi"};
        Display d1 = new Display(1);
        Display d2 = new Display(0.1f);
        Display d3 = new Display("Hello");
        Display d4 = new Display(a);
        Display d5 = new Display(b);
    }
}
