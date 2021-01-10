using System;
using System.Collections.Generic;
using System.Text;

namespace chapter11_12
{
    class chapter1112_2
    {
        public static void Main()
        {
            int N = 0, K = 0, count = 0, i = 0;

            string input = Console.ReadLine();
            foreach(char digit in input)
            {
                if (digit == ' ')
                {
                    N = int.Parse(input.Substring(0, i));
                    K = int.Parse(input.Substring(i + 1));
                }
                else
                {
                    i++;
                }
            }
            i = 0;
            int[] A = new int[N];
            for(int j = 0; j < N; j++)
            {
                A[j] = int.Parse(Console.ReadLine());
            }
            Array.Sort(A);
            Array.Reverse(A);
            while (K > 0)
            {
                if (K >= A[i])
                {
                    count += (K / A[i]);
                    K %= A[i];
                }
                else
                {
                    if (i == A.Length)
                    {
                        i = -1;
                    }
                    i++;
                }
            }
            Console.WriteLine(count);
        }
    }
}
