package AWT;
//drawing smiley face
import java.awt.*;
import java.awt.event.*;
public class DrawSmile extends Frame{
public void paint(Graphics g){
g.setColor(Color.blue);
g.drawRect(50,50,160,125);
g.drawOval(90,70,80,80);
g.drawOval(110,95,5,5);
g.drawOval(145,95,5,5);
g.drawLine(130,95,130,115);
g.drawArc(113,115,35,20,180,180);
}
public static void main(String args[]){
DrawSmile d = new DrawSmile();
d.setTitle("My Drawing");
d.setSize(400,400);
d.setVisible(true);
d.addWindowListener(new WindowAdapter(){
public void windowClosing(WindowEvent e)
{
System.exit(0);
}
});
}}