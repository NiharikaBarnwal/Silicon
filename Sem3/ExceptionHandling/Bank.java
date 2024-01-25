package ExceptionHandling;

class MinimumBalanceException extends RuntimeException{
    MinimumBalanceException(){
        super("Balance is less than 500");
    }
}

class Account {
        String name;
        int acc_no;
        double balance;
        Account(String x, int n, double b){
            name=x;
            acc_no=n;
            balance=b;
        }
        void deposit(int amt){
            balance=balance+amt;
            System.out.println("The Current balance is:"+balance);
        }
        void withdraw(int amt){
            try{
                if(balance-amt<500){
                throw new MinimumBalanceException();
                }
                else{
                balance=balance-amt;
                System.out.println("The Current balance is:"+balance);
                }
            }
            catch(MinimumBalanceException e){
                System.out.println(e);
            }
        }
        void transfer(Account acc1, Account acc2, int amt){
            try{
                if(acc1.balance-amt<500){
                    throw new MinimumBalanceException();
                }
                else{
                acc1.balance=acc1.balance - amt;
                acc2.balance=acc2.balance + amt;
                System.out.println("The Current balance is:"+acc2.balance);
                }
            }
            catch(MinimumBalanceException e){
                System.out.println(e);
            }
        }
}
public class Bank{
    public static void main(String[] args) {
        Account a = new Account("Ram",123,1000);
        Account b = new Account("Shyam",123,1000);
        a.deposit(500);
        a.withdraw(1000);
        b.transfer(a, b, 100);
    }
}
