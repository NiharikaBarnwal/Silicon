package a10;

import java.awt.*;
import java.awt.event.*;

public class colors extends Frame implements ActionListener {
    Button b1,b2,b3;
    Label l1;
    colors(){
        this.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e){
                System.exit(0);
            }
        });
        b1=new Button("Red");
        b2=new Button("Blue");
        b3=new Button("Green");
        l1=new Label("Hello");

        b1.setBounds(100,100,70,40);
        b2.setBounds(180,100,70,40);
        b3.setBounds(260,100,70,40);

        add(b1);
        add(b2);
        add(b3);
        add(l1);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);


    }
    
    public void actionPerformed(ActionEvent ae){
        String str = ae.getActionCommand();
        if(str.equals("Red")){
            l1.setForeground(Color.red);
        }
        else if(str.equals("Blue")){
            l1.setForeground(Color.blue);
        }
        if(str.equals("Green")){
            l1.setForeground(Color.green);
        }
    }
    public static void main(String[] args) {
        colors a = new colors();
        a.setTitle("Colors");
        a.setSize(500,400);
        a.setVisible(true);
    }
}
