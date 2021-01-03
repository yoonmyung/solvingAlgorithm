using System;
using System.Collections;

namespace chapter10 {
    //10장 연습문제 2
    class MatrixMainApp
    {
        public static void Main()
        {
            int[,] A = new int[2, 2] { { 3, 2 }, { 1, 4 } };
            int[,] B = new int[2, 2] { { 9, 2 }, { 1, 7 } };
            int[,] result = new int[2, 2];

            for(int row = 0; row < 2; row++) {
                result[row, 0] = A[row, 0] * B[0, 0] + A[row, 1] * B[1, 0];
                result[row, 1] = A[row, 0] * B[0, 1] + A[row, 1] * B[1, 1];
            }

            foreach(int data in result)
            {
                Console.WriteLine(data);
            }
        }
    }

    //10장 연습문제 5
    class HashMainApp
    {   
        public static void Main()
        {
            Hashtable ht = new Hashtable();

            int[] a = new int[3];

            ht["회사"] = "Microsoft";
            ht["URL"] = "www.microsoft.com";
            Console.WriteLine("회사 : {0}", ht["회사"]);
            Console.WriteLine("URL : {0}", ht["URL"]);
            Console.WriteLine(a.Length);
        }
    }
}