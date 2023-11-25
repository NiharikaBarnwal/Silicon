package a2;
import java.util.Scanner;

public class duplicate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i,j,k,N;
        System.out.print("Enter the array size: ");
        N=sc.nextInt();
        int arr[]=new int[N];
        System.out.println("Enter the array: ");
        for(i=0;i<N;i++){
            arr[i]= sc.nextInt();
        }
        for(i=0;i<N;i++){
            for(j=i+1;j<N;j++){
                if(arr[i]==arr[j]){
                    for(k=j;k<N-1;k++){
                        arr[k]=arr[k+1];
                    }
                    N=N-1;
                }
            }
        }
        System.out.println("The final array is: ");
        for(i=0;i<N;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
