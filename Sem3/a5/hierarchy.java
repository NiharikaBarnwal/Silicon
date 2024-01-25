package a5;
class Point{
    private float xCo, yCo;
    public Point(){
        xCo=-1;
        yCo=-1;
    }
    public Point(float a, float b){
        xCo=a;
        yCo=b;
    }
    public void printPoint(){
        System.out.println("The coordinates are: x="+xCo+" y="+yCo);
    }
}
class Circle extends Point{
    private float radius;
    public Circle(){
        super();
        radius=-1;
    }
    public Circle(float a, float b, float r){
        super(a,b);
        radius=r;
    }
    public void printCircle(){
        printPoint();
        System.out.println("The area of circle : "+(3.14*radius*radius));
    }
}
class Cylinder extends Circle{
    private float height;
    public Cylinder(){
        super();
        height=-1;
    }
    public Cylinder(float a, float b, float r, float h){
        super(a,b,r);
        height=h;
    }
    public void printCylinder(){
        printCircle();
        System.out.println("The height of cylinder: "+(height));
    }
}
public class hierarchy {
    public static void main(String[] args) {
        Cylinder c1= new Cylinder();
        Cylinder c2= new Cylinder(1,2,3,4);
        c1.printPoint();
        c1.printCircle();
        c1.printCylinder();
        c2.printPoint();
        c2.printCircle();
        c2.printCylinder();
    }
}
