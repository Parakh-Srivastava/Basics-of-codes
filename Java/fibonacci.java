import java.util.*;
public class fibonacci 
{
   public static void main(String[] args)
   {
      Scanner sc = new Scanner(System.in);
      System.out.print("Enter the number of numbers you need :");
      int nums = sc.nextInt();
      int prev = 0;
      int curr = 1;
      System.out.println(prev);
      System.out.println(curr);
      for(int i = 0; i<= nums - 3; i++)
      {
         int next_num = prev + curr;
         System.out.println(next_num);
         prev = curr;
         curr = next_num;
      }
      sc.close();
   }   
}
