package a3;
class Student{
    String sname;
    int markforProgramming;
    int markforLogic;
    char grade;
    Student(){

    }
    Student(String n, int p, int l, char g){
        sname=n;
        markforProgramming=p;
        markforLogic=l;
        grade=g;
    }
    boolean isStronger(Student s1, Student s2){
        if(s1.markforProgramming>s2.markforProgramming){
            return true;
        }
        else if(s1.markforProgramming==s2.markforProgramming){
            if(s1.markforLogic>s2.markforLogic){
                return true;
            }
            else if(s1.markforLogic==s2.markforLogic){
                if(s1.grade<s2.grade){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
}
public class Comp {
    public static void main(String[] args) {
        Student s1= new Student("Ram",90,92,'A');
        Student s2= new Student("Shyam",90,92,'B');
        Student s3= new Student();
        if(s3.isStronger(s1, s2)){
            System.out.println(s1.sname+" performed better than "+s2.sname);
        }
        else{
            System.out.println(s2.sname+" performed better than "+s1.sname);
        }
    }
}
