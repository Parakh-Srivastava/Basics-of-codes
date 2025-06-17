public class sortingArray
{
    public static void main(String[] args)
    {
    int[] Array = {3, 6, 4, 10, 6};
        for(int i = 0; i < Array.length; i++)
        {
            for(int o = 0; o < Array.length-1; o++)
            {
                if(Array[o] <= Array[o+1])
                {
                    Array[o] = Array[o] + Array[o+1]; 
                    Array[o+1] = Array[o] - Array[o+1];
                    Array[o] = Array[o] - Array[o+1];
                }
            }
        }
        for(int A = 0; A <= Array.length - 1; A++)
        {
            System.out.print(Array[A] + " ");
        }
    }
}