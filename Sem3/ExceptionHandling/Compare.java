package ExceptionHandling;

import java.util.*;

class NameFormatException extends RuntimeException{
    NameFormatException(){
        super("Invalid name format");
    }
}

class Name{
    String fn,ln;
    Name(String s1){
        throw new NameFormatException();
    }
    Name(String s1, String s2){
        fn=s1;
        ln=s2;
    }
    Name(String s1, String s2, String s3){
        throw new NameFormatException();
    }
    void NameCompare(Name n1, Name n2){
        Numeric(n1.fn);
        Numeric(n1.ln);
        Numeric(n2.fn);
        Numeric(n2.ln);

        if(n1.fn.equals(n2.fn) && !n1.ln.equals(n2.ln)){
            System.out.println("Same First Name");
        }
        else if(!n1.fn.equals(n2.fn) && n1.ln.equals(n2.ln)){
            System.out.println("Same Last Name");
        }
        else if(n1.fn.equals(n2.fn) && n1.ln.equals(n2.ln)){
            System.out.println("Same Name");
        }
        else{
            System.out.println("Different Name");
        }
    }
    void Numeric(String s){
        char ca[]= s.toCharArray();
        for(int i=0;i<ca.length;i++){
            char c = ca[i];
                if(Character.isDigit(c)){
                    throw new NameFormatException();
                }
            
        }
    }
}

public class Compare {
    public static void main(String[] args) {
        try{
            Name n1= new Name("Niharika", "Barnwal");
            Name n2= new Name("Rishu", "Barnwal");
            n1.NameCompare(n1, n2);
        }
        catch(NameFormatException e){
            System.out.println(e);
        }
    }
}
