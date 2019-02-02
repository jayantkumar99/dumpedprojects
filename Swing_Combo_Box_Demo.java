/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author USER
 */
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
public class Swing_Combo_Box_Demo {
   static JComboBox box;
   static JButton btn;
   static JLabel lbl;
   static JTextField field;
   static Container c;
   static String s;
    public static void main(String args[])
    {
     JFrame frame=new JFrame("JCOMBOBOX");  
     frame.setVisible(true);
     frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
     frame.setBounds(100,50,350,250);
     c=frame.getContentPane();
     c.setLayout(null);
     box=new JComboBox();
     box.setBounds(20,20,150,20);
     box.setEditable(true);
     c.add(box);
     lbl=new JLabel();
     lbl.setBounds(200,20,80,20);
     c.add(lbl);
     field=new JTextField();
     field.setBounds(200,50,130,30);
     c.add(field);
     c.setBackground(Color.GREEN);
     btn=new JButton("Add Items");
     btn.setBounds(200,90,130,30);
     c.add(btn);
     btn.addActionListener(new ActionListener()
                 {
                     @Override
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_btn(e);
                     }
                 });
    }
    public static void Action_btn(ActionEvent e)
    {
        s=field.getText();
        lbl.setText(s);
        box.addItem(field.getText());
    }
}
