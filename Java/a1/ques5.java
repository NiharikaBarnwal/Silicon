public class ques5 {
     public static void main(String[] args) {
        int i,flag=0,count=0,j;
        for(j=37;j<=129;j++){
            flag=0;
            for(i=2;i<j;i++){
                if(j%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count++;
            }
        }
        System.out.println("There are "+count+" prime numbers between 37 and 129.");
    }
}