using System;
using System.Collections.Generic;
using System.Text;

namespace chapter11_12
{
    class chapter1112_1
    {
        public static void Main()
        {
            int N, count = 0, diff = 0;

            N = int.Parse(Console.ReadLine());
            for (int i = 1; i <= N; i++)
            {
                if (i <= 99)
                {
                    count++;
                }
                else
                {
                    string bigN = i.ToString();
                    diff = (bigN[1] - '0') - (bigN[0] - '0');
                    bool isHansoo = true;
                    for (int j = 1; j < bigN.Length - 1; j++)
                    {
                        int temp = (bigN[j + 1] - '0') - (bigN[j] - '0');
                        if (diff != temp)
                        {
                            isHansoo = false;
                            break;
                        }
                    }
                    if (isHansoo)
                    {
                        count++;
                    }
                }
            }
            Console.WriteLine(count);
        }
    }
}
