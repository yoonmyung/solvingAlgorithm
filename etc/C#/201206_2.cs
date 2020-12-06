using System;
using System.Collections.Generic;
using System.Text;

namespace question201206
{
    class q2
    {
        public static void Main()
        {
            while (true)
            {
                int result = 0;
                int digit = 1;
                string complementResult;

                Console.Write("1000 이하의 10진수 양수 입력: ");
                int input = int.Parse(Console.ReadLine());
                if (input > 1000 || input < 0)
                {
                    Console.WriteLine("범위를 벗어났습니다. 다시 입력하세요.");
                    continue;
                }
                while (input >= 1)
                {
                    result += input % 2 * digit;
                    input /= 2;
                    digit *= 10;
                }
                Console.WriteLine($"변환된 2진수: {result}");
                complementResult = result.ToString();
                complementResult = complementResult.Replace('1', '2');
                complementResult = complementResult.Replace('0', '1');
                complementResult = complementResult.Replace('2', '0');
                Console.WriteLine($"1의 보수: {complementResult}");
            }
        }
    }
}
