import java.util.*;
import java.lang.Character;
public class vowelConsonant 
{
    public static void main(String[] args)
    {
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter a letter :");
       char inp = sc.next().charAt(0);
       inp = Character.toLowerCase(inp);
       if(inp == 'a' || inp == 'e' || inp == 'i' || inp == 'o' || inp == 'u' )
       {
            System.out.println("It is a vowel.");
       }
       else
       {
            System.out.println("It is a consonant.");
       }
       sc.close();
    }
}