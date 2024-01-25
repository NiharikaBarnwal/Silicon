package a6;

class Point2D{
    private int x;
    private int y;
    Point2D(){
        x=0;
        y=0;
    }
    Point2D(int a, int b){
        x=a;
        y=b;
    }
    int getX(){
        return x;
    }
    void setX(int m){
        x=m;
    }
    int getY(){
        return y;
    }
    void setY(int n){
        y=n;
    }
    String toString(){
        return "(x,y)";
    }
}

class Point3D extends Point2D{
    private int z;
    Point3D(){
        super();
    }
}

public class ques1 {
    
}
