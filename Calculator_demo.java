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
import java.awt.event.*;
public class Calculator_demo {
   static Container c;
   static JTextField txt;
  static  double op1 , op2  ;
 static double result = 0d;
 static char action;
 static boolean b = false;
 
   
    public static void main(String args[])
    {
        JFrame frame=new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,100,250,380);
        frame.setResizable(false);
        frame.setTitle("CALCULATOR");
        c=frame.getContentPane();
        c.setLayout(null);
        txt=new JTextField();
        txt.setBounds(5,0,230,120);
         txt.setFont(new Font("Tahoma", Font.PLAIN, 24));
    txt.setHorizontalAlignment(JTextField.RIGHT);
         Button one = new Button ("1");
         one.setBounds(5,120,30,50);
         one.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_one(e);
                     }
                 });
      Button clear = new Button ("C");
      clear.setBounds(125,235,30,50);
       clear.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_clear(e);
                     }
                 });
      Button two = new Button ("2");
      two.setBounds(45,120,30,50);
        two.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_two(e);
                     }
                 });
      Button three = new Button ("3");
      three.setBounds(85,120,30,50);
        three.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_three(e);
                     }
                 });
      Button four = new Button ("4");
      four.setBounds(125,120,30,50);
        four.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_four(e);
                     }
                 });
      Button five = new Button ("5");
      five.setBounds(5,175,30,50);
        five.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_five(e);
                     }
                 });
      Button six = new Button ("6");
      six.setBounds(45,175,30,50);
        six.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_six(e);
                     }
                 });
      Button seven = new Button ("7");
      seven.setBounds(85,175,30,50);
        seven.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_seven(e);
                     }
                 });
      Button eight = new Button ("8");
      eight.setBounds(125,175,30,50);
        eight.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_eight(e);
                     }
                 });
      Button nine = new Button ("9");
      nine.setBounds(5,235,30,50);
        nine.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_nine(e);
                     }
                 });
      Button add = new Button ("add");
      add.setBounds(185,120,30,50);
        add.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_add(e);
                     }
                 });
      Button subtract = new Button ("sub");
      subtract.setBounds(185,175,30,50);
        subtract.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_subtract(e);
                     }
                 });
      Button multiply = new Button ("mul");
      multiply.setBounds(185,235,30,50);
        multiply.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_multiply(e);
                     }
                 });
      Button divide = new Button ("div");
      divide.setBounds(185,295,30,50);
        divide.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_divide(e);
                     }
                 });
      Button equals = new Button ("equals");
      equals.setBounds(5,295,150,50);
        equals.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_equals(e);
                     }
                 });
        
         Button zero=new Button("0");
      zero.setBounds(45,235,30,50); 
        zero.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_zero(e);
                     }
                 });
        Button dot=new Button(".");
        dot.setBounds(85,235,30,50);
        dot.addActionListener(new ActionListener()
                 {
                     public void actionPerformed(ActionEvent e)
                     {
                         Action_dot(e);
                     }
                 });
        c.add(txt);
        c.add(one);
        c.add(two);
        c.add(three);
        c.add(four);
        c.add(five);
        c.add(six);
        c.add(seven);
        c.add(eight);
        c.add(nine);
        c.add(zero);
        c.add(add);
        c.add(subtract);
        c.add(multiply);
        c.add(divide);
        c.add(equals);
        c.add(clear);
        c.add(dot);
    }
    
    void typeOnt(KeyEvent e) {
    e.consume();
}
    public  static void Action_one(ActionEvent e)
    {
         if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "1");
    } else {
        txt.setText(txt.getText() + "1");
    }
    }
       public  static void Action_two(ActionEvent e)
    {
        
         if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "2");
    } else {
        txt.setText(txt.getText() + "2");
    }
    }
          
             public  static void Action_three(ActionEvent e)
    {
        
               if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "3");
    } else {
        txt.setText(txt.getText() + "3");
    }
    }
             
                public static void Action_four(ActionEvent e)
    {
        
               if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "4");
    } else {
        txt.setText(txt.getText() + "4");
    }
    }
                   public  static void Action_five(ActionEvent e)
    {
        
               if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "5");
    } else {
        txt.setText(txt.getText() + "5");
    }
    }
                      public  static void Action_six(ActionEvent e)
    {
        
               if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "6");
    } else {
        txt.setText(txt.getText() + "6");
    }
    }
                         public  static void Action_seven(ActionEvent e)
    {
        
               if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "7");
    } else {
        txt.setText(txt.getText() + "7");
    }
    }
                            public  static void Action_eight(ActionEvent e)
    {
        
              if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "8");
    } else {
        txt.setText(txt.getText() + "8");
    }
    }
                               public  static void Action_nine(ActionEvent e)
    {
        
               if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "9");
    } else {
        txt.setText(txt.getText() + "9");
    }
    }
                                  public  static void Action_zero(ActionEvent e)
    {
        
               if (b) {
        txt.setText(null);
        b = false;
        txt.setText(txt.getText() + "0");
    } else {
        txt.setText(txt.getText() + "0");
    }
    }
                                     public  static void Action_add(ActionEvent e)
    {
        
        b = true;
    action = '+';
    op1 = Double.parseDouble(txt.getText());
    }
                                        public  static void Action_subtract(ActionEvent e)
    {
        
        b = true;
    action = '-';
    op1 = Double.parseDouble(txt.getText());
    }
                                           public  static void Action_multiply(ActionEvent e)
    {
        
        b = true;
    action = '*';
    op1 = Double.parseDouble(txt.getText());
    }
                                              public  static void Action_divide(ActionEvent e)
    {
        
        b = true;
    action = '/';
    op1 = Double.parseDouble(txt.getText());
    }
                                              
         public  static void Action_clear(ActionEvent e)
    {
        
        txt.setText( " ");
    }
            public  static void Action_equals(ActionEvent e)
    {
        
         op2 = Double.parseDouble(txt.getText());
    Cal();
    }
                     public  static void Action_dot(ActionEvent e)
    {
        
        b = true;
    action = '.';
    op1 = Double.parseDouble(txt.getText());
    }
                  static   void Cal() {
    switch (action) {
        case '+': result = op1 + op2; break;
        case '-': result = op1 - op2; break;
        case '*': result = op1 * op2; break;
        case '/': result = op1 / op2; break;
    }      
    txt.setText(String.valueOf(result));
}
}

