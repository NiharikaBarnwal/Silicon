package a2;
import java.util.Scanner;

public class ques4 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int i,j,n,m;
        System.out.print("Enter the matrix size: ");
        m= sc.nextInt();
        n= sc.nextInt();
        int matrix[][]=new int[m][n];
        System.out.println("Enter the matrix: ");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                matrix[i][j]= sc.nextInt();
            }
        }
        for(j=0;j<n;j++){
            int temp=matrix[0][j];
            matrix[0][j]=matrix[m-1][j];
            matrix[m-1][j]=temp;
        }
        System.out.println("The edited matrix:");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }

}
