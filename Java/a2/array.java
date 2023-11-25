package a2;
import java.util.Scanner;
public class array {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int arr[]=new int[10];
        int i,n;
        System.out.println("Enter the array: ");
        for(i=0;i<10;i++){
            arr[i]=sc.nextInt();
        }
        System.out.print("Enter the number to be searched:");
        n=sc.nextInt();
        System.out.println("The entered array is: ");
        for(i=0;i<10;i++){
            System.out.print(arr[i]+" ");
        }
        for(i=0;i<10;i++){
            if(arr[i]==n){
                System.out.println("\nThe number is found.");
                break;
            }
        }
    }
}
