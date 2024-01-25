package a10;

import java.util.*;

public class array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int flag=0;
        ArrayList<String> list=new ArrayList<String>();
        list.add("Ram");
        list.add("Shyam");
        list.add("Raj");
        list.add("Harry");
        list.add("Hari");
        System.out.print("Enter the name to be replaced:");
        String s = sc.nextLine();
        for(int i=0;i<list.size();i++){
            if(s.equals(list.get(i))){
                flag=1;
                System.out.print("Enter the name that takes the place:");
                String x = sc.nextLine();
                list.set(i,x);
            }
        }
        if(flag==0){
            System.out.println("Inputted name does not exist in the array.");
        }
        Iterator itr = list.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }
    }
    
}
