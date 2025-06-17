import java.util.*;
public class add
{
    public static void main(String[] args)
    {
       int a,b,sum;
       Scanner sc = new Scanner(System.in);
       System.out.print("Enter first number:");
       a = sc.nextInt();
       System.out.print("Enter second number:");
       b = sc.nextInt();
       sum = a + b;
       System.out.println("Sum of " + a + " and " + b + " is: " + sum);
       sc.close();
    }
}