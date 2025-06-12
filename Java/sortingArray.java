public class sortingArray
{
    public static void main(String[] args)
    {
        int[] Array = {6, 3, 4, 10, 6};
        for(int i = 0; i < Array.length; i++)
        {
            for(int o = 0; o < Array.length-1; o++)
            {
                if(Array[o] >= Array[o+1])
                {
                    Array[o] = Array[o] + Array[o+1];
                    Array[o+1] = Array[o] - Array[o+1];
                    Array[o] = Array[o] - Array[o+1];
                }
            }
            System.out.print(Array[i] + " ");
        }
    }
}