package a10;

import java.awt.*;
import java.awt.event.*;

public class Smiley extends Frame {
    public void paint(Graphics g){
        int x[]={87,91,95};
        int y[]={96,89,96};
        g.setColor(Color.yellow);
        g.fillOval(50, 50, 80, 80);
        g.setColor(Color.black);
        g.fillOval(70, 70, 10, 15);
        g.fillOval(102, 70, 10, 15);
        g.drawArc(70, 95, 42, 20, 180, 180);
        g.drawPolygon(x,y, 3);
        g.drawString("Appalet started", 10, 180);

    }
    Smiley(){
        this.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e){
                System.exit(0);
            }
        });
    }
    public static void main(String[] args) {
        Smiley a = new Smiley();
        a.setTitle("Smiley Face");
        a.setSize(200,250);
        a.setVisible(true);
    }
    
}
