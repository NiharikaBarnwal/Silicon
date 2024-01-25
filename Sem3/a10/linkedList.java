package a10;

import java.util.*;

public class linkedList {
    public static void main(String[] args) {
        LinkedList<String> l1 = new LinkedList<String>();
        LinkedList<String> l2 = new LinkedList<String>();
        int flag=0;

        l1.add("Red");
        l1.add("Yellow");
        l1.add("Green");
        l1.add("Blue");

        l2.add("Red");
        l2.add("Yellow");
        l2.add("Purple");
        l2.add("Blue");

        if(l1.size()!=l2.size()){
            System.out.println("The two linked list does not contain the same element.");
        }
        else{
            for(int i=0;i<l1.size();i++){
                if(l1.equals(l2)){
                    flag=1;
                }
                else{
                    System.out.println("The two linked list does not contains the same element.");
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                System.out.println("The two linked list contain the same element.");
            }
        }
    }
}
