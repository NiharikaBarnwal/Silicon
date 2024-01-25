package a5;
class Complex{
    private float a,b,i;
    Complex(){
        a=0;
        b=0;
    }
    Complex(float x, float y){
        a=x;
        b=y;
    }
    public void add(Complex ob1, Complex ob2){
        a=ob1.a+ob2.a;
        b=ob1.b+ob2.b;
    }
    public void sub(Complex ob1, Complex ob2){
        a=ob1.a-ob2.a;
        b=ob1.b-ob2.b;
    }
    public void mul(Complex ob1, Complex ob2){
        a=(ob1.a*ob2.a)-(ob1.b*ob2.b);
        b=(ob1.a*ob2.b)+(ob1.b*ob2.a);
    }
    public void div(Complex ob1, Complex ob2){
        a=((ob1.a*ob2.a)+(ob1.b*ob2.b))/((ob2.a*ob2.a)+(ob2.b*ob2.b));
        b=((ob1.b*ob2.a)-(ob1.a*ob2.b))/((ob2.a*ob2.a)+(ob2.b*ob2.b));
    }
    public void display(){
        System.out.println(a+" + "+b+"i");
    }
}
public class Complextest {
    public static void main(String[] args) {
        Complex c1= new Complex(2,4);
        Complex c2= new Complex(3,5);
        Complex c3= new Complex();
        c3.add(c1,c2);
        System.out.print("The sum of complex numbers is ");
        c3.display();
        c3.sub(c1,c2);
        System.out.print("The subtraction of complex numbers is ");
        c3.display();
        c3.mul(c1,c2);
        System.out.print("The multiplication of complex numbers is ");
        c3.display();
        c3.div(c1,c2);
        System.out.print("The division of complex numbers is ");
        c3.display();
    }
    
}
