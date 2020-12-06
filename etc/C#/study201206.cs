using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace chapters
{
    class chapter5_1
    {
        /*
        public static void Main()
        {
            for (int i = 1; i <= 5; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
        */
    }

    class chapter5_2
    {
        /*
        public static void Main()
        {
            for (int i = 5; i >= 1; i--)
            {
                for (int j = 0; j < i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
        */
    }

    class chapter5_3
    {
        /*
        public static void Main()
        {
            //1번
            int i = 1;

            while (i <= 5)
            {
                int j = 1;

                while (j++ <= i)
                {
                    Console.Write("*");
                }
                i++;
                Console.WriteLine();
            }

            //2번
            i = 5;
            do
            {
                int j = 1;

                do
                {
                    Console.Write("*");
                } 
                while (j++ < i);
                Console.WriteLine();
            } 
            while (i-- > 1);
        }
        */
    }

    class chapter5_4
    {
        /*
        public static void Main()
        {
            int count = 0;

            while (true)
            {
                Console.Write("반복 횟수를 입력하세요 : ");
                count = int.Parse(Console.ReadLine());
                if (count <= 0)
                {
                    Console.WriteLine("0보다 작거나 같은 수는 입력할 수 없습니다.");
                    continue;
                }
                break;
            }
            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
        }
        */
    }

    class chapter6_1
    {
        /*
        public static double Square(double num)
        {
            return num * num;
        }

        public static void Main()
        {
            Console.Write("수를 입력하세요: ");
            string input = Console.ReadLine();
            double arg = Convert.ToDouble(input);
            Console.Write("결과 : {0}", Square(arg));
        }
        */
    }

    class chapter6_2
    {
        /*
        public static void Main()
        {
            double mean = 0;

            Mean (1, 2, 3, 4, 5, ref mean);
            Console.WriteLine("평균: {0}", mean);
        }

        public static void Mean(
            double a, double b, double c,
            double d, double e, ref double mean)
        {
            mean = (a + b + c + d + e) / 5;
        }
        */
    }

    class chapter6_3
    {
        public static void Main()
        {
            int a = 3, b = 4, resultA = 0;

            Plus (a, b, out resultA);
            Console.WriteLine("{0} + {1} = {2}", a, b, resultA);
            
            double x = 2.4, y = 3.1, resultB = 0;
            Plus(x, y, out resultB);
            Console.WriteLine("{0} + {1} = {2}", x, y, resultB);

            int aab = 5;
            ref int xx = ref aab;
            xx = 3;
            Console.WriteLine($"{xx}, {aab}");

        }

        public static void Plus (int a, int b, out int c)
        {
            c = a + b;
        }

        public static void Plus (double x, double y, out double z)
        {
            z = x + y;
        }
    }
}
