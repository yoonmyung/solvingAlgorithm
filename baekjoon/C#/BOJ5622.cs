using System;
using System.Collections.Generic;
using System.Text;

namespace HelloWorld
{
    class BOJ5622
    {
        enum Dial
        {
            A = 3, B = 3, C = 3,
            D = 4, E = 4, F = 4,
            G = 5, H = 5, I = 5,
            J = 6, K = 6, L = 6,
            M = 7, N = 7, O = 7,
            P = 8, Q = 8, R = 8, S = 8,
            T = 9, U = 9, V = 9,
            W = 10, X = 10, Y = 10, Z = 10
        }

        public static void Main()
        {
            String input = Console.ReadLine();
            int totalTime = 0;
            for (int i = 0; i < input.Length; i++)
            {
                totalTime += (int)Enum.Parse(typeof(Dial), input[i].ToString());
            }
            Console.WriteLine(totalTime);
        }
    }
}
