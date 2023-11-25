package a3;

class Planet {
    String name;
    String satellites[];
    Planet(String n,String arr[]){
        name=n;
        satellites=new String[arr.length];
        for(int i=0;i<arr.length;i++){
            satellites[i]=arr[i];
        }
    }
   void print(){
       System.out.println(name+" has "+satellites.length+" satellite(s):");
        for(int i=0;i<satellites.length;i++){
            System.out.println(satellites[i]);
        }
    }
}
public class planet_sat {
    public static void main(String[] args) {
        String[] earth_sat={"Moon"};
        Planet earth = new Planet("Earth", earth_sat);
        earth.print();
    }
} 
