using System.Linq;
using System;

namespace chapter15_16 {
    public class ch15_16_1
    {
        public static void Main()
        {   
            var input = Console.ReadLine().Split(' ');
            int[] numbers = new int[input.Length];
            int i = 0;

            foreach(var num in input)
            {
                numbers[i++] = int.Parse(num);
            }
            i = 0;

            var second = from num in numbers
                         orderby num descending
                         select num;
            foreach(var num in second)
            {
                if (i == 1)
                {
                    Console.WriteLine($"{num}");
                    break;
                }
                i++;
            }
        }
    }
}