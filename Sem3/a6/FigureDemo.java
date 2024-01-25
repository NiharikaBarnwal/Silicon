package a6;
abstract class GeometricFigure{
    double dim1, dim2;
    abstract double getArea();
}
class Rectangle extends GeometricFigure{
    Rectangle(double a, double b){
        dim1=a;
        dim2=b;
    }
    double getArea(){
        return dim1*dim2;
    }
}
class Triangle extends GeometricFigure{
    Triangle(double a, double b){
        dim1=a;
        dim2=b;
    }
    double getArea(){
        return 0.5*dim1*dim2;
    }
}
public class FigureDemo {
    public static void main(String[] args) {
        Rectangle r = new Rectangle(3, 4);
        Triangle t = new Triangle(3, 4);
        GeometricFigure g;
        g=r;
        System.out.println("The area of rectangle: "+g.getArea());
        g=t;
        System.out.println("The area of triangle: "+g.getArea());
    }
}
