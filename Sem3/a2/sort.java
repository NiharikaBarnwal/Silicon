package a2;
import java.util.Scanner;
public class sort {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int i,j,x,N;
        System.out.print("Enter the array size: ");
        N=sc.nextInt();
        int arr[]=new int[N];
        System.out.println("Enter the array: ");
        for(i=0;i<N;i++){
            arr[i]=sc.nextInt();
        }
        for(i=0;i<N-1;i++){
            for(j=0;j<N-i-1;j++){
                if(arr[j+1]<arr[j]){
                    x=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=x;
                }
            }
        }
        System.out.println("The sorted array is: ");
        for(i=0;i<N;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
