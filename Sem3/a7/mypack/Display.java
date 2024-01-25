package a7.mypack;

public class Display {
    public Display(int n){
        System.out.println(n);
    }
    public Display(float n){
        System.out.println(n);
    }
    public Display(int[] n){
        for(int i=0;i<n.length;i++){
            System.out.print(n[i]+" ");
        }
        System.out.println();
    }
    public Display(String s){
        System.out.println(s);
    }
    public Display(String[] s){
        for(int i=0;i<s.length;i++){
            System.out.print(s[i]+" ");
        }
        System.out.println();
    }
}
