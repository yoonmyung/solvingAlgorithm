using System;
using System.Collections.Generic;
using System.Text;

namespace question201206
{
    class q1
    {
        public static void Main()
        {
            Console.Write("자연수를 입력하세요 : ");
            int count = int.Parse(Console.ReadLine());

            //other solution
            for (int i = 0; i < input; i++)
            {
                Console.Write(str);
                for (int j = 0; j < input; j++)
                    Console.Write(
                        j + i + 1 <= input ? j + i + 1 : (j + i + 1) % input
                    );
                str += " ";
                Console.WriteLine();
            }

            /*
            for (int i = 1; i <= count; i++)
            {
                for (int j = 1; j < i; j++)
                {
                    Console.Write(" ");
                }

                int k = i;
                string output = "";

                while (k <= count)
                {
                    output += k.ToString();
                    k++;
                    if (k > count && output.Length < count)
                    {
                        k = 1;
                    }
                    else if (output.Length >= count)
                    {
                        Console.WriteLine(output);
                        break;
                    }
                }
            }
            */
        }
    }
}
