package a10;

import java.awt.*;
import java.awt.event.*;

public class applet extends Frame{
    Label l1;
    applet(){
        l1= new Label("Niharika");
        add(l1);
        //for closing the applet
        this.addWindowListener(new WindowAdapter() {
        public void windowClosing(WindowEvent e){
            System.exit(0);
        }
    });
    }
    
    public static void main(String[] args) {
        applet a = new applet();
        a.setTitle("My first applet program");
        a.setSize(650,400);
        a.setVisible(true);
    }
}
