import java.util.*;
public class calculator
{
    public static void main(String[] args)
    {
       Scanner sc = new Scanner(System.in);
       double res = 0;
       System.out.print("Enter the first number :");
       double num1 = sc.nextDouble();
       System.out.print("Enter the second number :");
       double num2 = sc.nextDouble();
       System.out.print("Enter an operator :(+,-,*,/,^)");
       char ope = sc.next().charAt(0);
       if(ope == '+')
       {
          res = num1 + num2;
          System.out.println(num1 + " + " + num2 + " = " + res);
       }
       else if(ope == '-')
       {
          res = num1 - num2;
          System.out.println(num1 + " - " + num2 + " = " + res);
       }
       else if(ope == '*')
       {
          res = num1 * num2;
          System.out.println(num1 + " * " + num2 + " = " + res);
       }
       else if(ope == '/')
       {
          res = num1 / num2;
          System.out.println(num1 + " / " + num2 + " = " + res);
       }
       else if(ope == '^')
       {
        double replace = num1;  
        if(num2 != 1)
        {
        for(int i =1; i<num2;i++)
          {
            res = num1 * num1;
            num1 = res;
          }
        }
        else
        {
            res = num1;
        }
          System.out.println(replace + " ^ " + num2 + " = " + res);
       }
       else
       {
         System.out.println("Enter the correct operator :");
       }
       sc.close();
    }
}