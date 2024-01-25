package a10;
import java.awt.*;
import java.awt.event.*;

public class Calculator extends Frame implements ActionListener {
    Button b1, b2, b3, b4;
    TextField tf1, tf2, tf3;

    Calculator() {
        this.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
        tf1 = new TextField();
        tf2 = new TextField();
        tf3 = new TextField();

        tf1.setBounds(50, 50, 150, 20);
        tf2.setBounds(50, 100, 150, 20);
        tf3.setBounds(50, 150, 150, 20);
        tf3.setEditable(false);

        b1 = new Button("Add");
        b2 = new Button("Subtract");
        b3 = new Button("Multiply");
        b4 = new Button("Divide");

        b1.setBounds(100, 200, 70, 40);
        b2.setBounds(180, 200, 70, 40);
        b3.setBounds(260, 200, 70, 40);
        b4.setBounds(340, 200, 70, 40);

        add(tf1);
        add(tf2);
        add(tf3);
        add(b1);
        add(b2);
        add(b3);
        add(b4);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        String s1 = tf1.getText();
        String s2 = tf2.getText();
        int a = Integer.parseInt(s1);
        int b = Integer.parseInt(s2);
        double c = 0; // Use double for division

        if (ae.getSource() == b1) {
            c = a + b;
        } else if (ae.getSource() == b2) {
            c = a - b;
        } else if (ae.getSource() == b3) {
            c = a * b;
        } else if (ae.getSource() == b4) {
            if (b != 0) {
                c = (double) a / b;
            } else {
                tf3.setText("Cannot divide by zero");
                return; // exit the method if division by zero is attempted
            }
        }

        String result = String.valueOf(c);
        tf3.setText(result);
    }

    public static void main(String[] args) {
        Calculator a = new Calculator();
        a.setTitle("Calculator");
        a.setSize(500, 500);
        a.setLayout(null);
        a.setVisible(true);
    }
}