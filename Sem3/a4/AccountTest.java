package a4;

import java.util.Scanner;

class Account{
    String accNo;
    Double balance;
    int timePeriod;
    static Double InYears= 7.5 ;
    Account(String num, Double bal, int time){
        accNo=num;
        balance=bal;
        timePeriod=time;
    }
    Double calculateInterest(){
        return balance*timePeriod*InYears/100;
    }
    void showAccDetails(){
        System.out.println(accNo+"\t"+balance+"\t"+calculateInterest());
    }
    static void changeIntRate(Double newRate){
        InYears=newRate;
    }
}

public class AccountTest {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of Accounts: ");
        int n=sc.nextInt();
        Account e[]=new Account[n];
        for(int i=0;i<n;i++){
            System.out.println("Enter the detail of Account "+(i+1));
            System.out.print("Enter the account number: ");
            sc.nextLine();
            String m= sc.nextLine();
            System.out.print("Enter the balance: ");
            Double s= sc.nextDouble();
            System.out.print("Enter the time period: ");
            int x= sc.nextInt();
            e[i]=new Account(m,s,x);
        }
        System.out.println("ACCNO\tNAME");
        for(int i=0;i<n;i++){
             e[i].showAccDetails();
        }
        e[1].changeIntRate(7.0);
        System.out.println("After changing the interest rate:");
        System.out.println("ACCNO\tNAME");
        for(int i=0;i<n;i++){
             e[i].showAccDetails();
        }
    }
    
}