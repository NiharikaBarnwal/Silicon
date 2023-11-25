package a3;

class Item {
    String name;
    double price;
    int quantity;
    public Item(String name, double price, int quantity){
        this.name=name;
        this.price=price;
        this.quantity=quantity;
    }
    String getName(){
        return name;
    }
    double getPrice(){
        return price;
    }
    int getQuantity(){
        return quantity;
    }
    double getValue(){
        return quantity*price;
    }
}
public class Inventory {
    public static void main(String[] args) {
        Item i1= new Item("Stapler", 2.25, 15);
        Item i2= new Item("Paer", 32.99, 255);
        Item i3= new Item("Binder", 4.75, 9);
        System.out.println("Name\t\tPrice\t\tQuantity\tValue");
        System.out.println("========================================================");
        System.out.println(i1.getName()+"\t\t$"+i1.getPrice()+"\t\t"+i1.getQuantity()+"\t\t$"+i1.getValue());
        System.out.println(i2.getName()+"\t\t$"+i2.getPrice()+"\t\t"+i2.getQuantity()+"\t\t$"+i2.getValue());
        System.out.println(i3.getName()+"\t\t$"+i3.getPrice()+"\t\t"+i3.getQuantity()+"\t\t$"+i3.getValue());
        System.out.println("Total Inventory is $"+(i1.getValue()+i2.getValue()+i3.getValue()));
    }
    
}