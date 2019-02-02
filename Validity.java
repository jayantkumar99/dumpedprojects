/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author USER
 */
import java.awt.*;
import javax.swing.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
public class Validity {
    static Container c;
    static JLabel lb1,lb2,lb3;
    static JTextField fd1,fd2,fd3;
    static JButton btn;
    static String s,str;
    static   int a;
    public static void main(String args[])
    {
        JFrame frame=new JFrame("FieldValidator");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(200,200,500,250);
        c=frame.getContentPane();
        c.setLayout(null);
        lb1=new JLabel("Number");
        lb1.setBounds(50,10,100,50);
          lb2=new JLabel("Date");
        lb2.setBounds(50,60,100,50);
          lb3=new JLabel("Time");
        lb3.setBounds(50,110,100,50);
        fd1=new JTextField();
        fd1.setBounds(200,20,150,30);
        fd2=new JTextField();
        fd2.setBounds(200,60,150,30);
        fd3=new JTextField();
        fd3.setBounds(200,110,150,30);
        btn=new JButton("Check Validation");
        btn.setBounds(170,170,130,20);
              btn.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent event)
                     {
                         Action_btn(event);
                     }
                 });
        c.add(btn);
        c.add(fd3);
        c.add(fd2);
        c.add(fd1);
        c.add(lb1);
        c.add(lb2);
        c.add(lb3);
    }
    public static void Action_btn(ActionEvent event)
    {
        try{
         str=fd1.getText();
            a = Integer.valueOf(str);
        JOptionPane.showMessageDialog(c,"Correct Formate");
        }
        catch(HeadlessException | NumberFormatException e)
        {
            JOptionPane.showMessageDialog(c,"Incorrect Formate");
              }
        
    }   
        
    }  

