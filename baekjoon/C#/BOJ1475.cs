using System;
using System.Collections;
using System.Text;

namespace chapter17_19
{
    class chapter1719_2
    {
        public static void Main()
        {
            int number = int.Parse(Console.ReadLine());
            int[] pack = 
                new int[10] { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
            int count = 1;

            while (number > 0)
            {
                if (pack[number % 10] <= 0)
                {
                    if (number % 10 == 6)
                    {
                        if (pack[9] > 0)
                        {
                            pack[9]--;
                            number /= 10;
                            continue;
                        }
                    }
                    else if (number % 10 == 9)
                    {
                        if (pack[6] > 0)
                        {
                            pack[6]--;
                            number /= 10;
                            continue;
                        }
                    }
                    count++;
                    for (int i = 0; i < 10; i++)
                    {
                        if (i == number % 10) { continue; }
                        pack[i]++;
                    }
                }
                else
                {
                    pack[number % 10]--;
                }
                number /= 10;
            }
        }
    }
}