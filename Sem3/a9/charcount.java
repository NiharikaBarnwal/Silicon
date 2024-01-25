package a9;

public class charcount {
    public static void main(String[] args) {
        String s = "impossible";
        int i,j,k,count,x;
        for(i=0;i<s.length();i++){
            x=1;
            count=0;
            char ch = s.charAt(i);
            for(k=0;k<i;k++){
                if(ch==s.charAt(k)){
                    x=0;
                }
            }
            if(x==0){
                continue;
            }
            for(j=i;j<s.length();j++){
                if(ch==s.charAt(j)){
                    count++;
                }
            }
            System.out.println("The Character "+ch+" has occured "+count+" times");
        }
    }
}
