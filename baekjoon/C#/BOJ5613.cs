using System;
using System.Collections.Generic;
using System.Text;

//백준에서는 틀렸다고 나옴! 테스트 케이스 더 필요
namespace BOJ
{
    class BOJ5613
    {
        public static void Main()
        {
            string input = "_";
            char Operator = '$';
            long operation1 = 111111111;
            long operation2;

            while (true)
            {
                input.Remove(0);
                input = Console.ReadLine();
                if (input.Contains('+') ||
                   input.Contains('-') ||
                   input.Contains('*') ||
                   input.Contains('/'))
                {
                    Operator = input[0];
                }
                else if (input.Contains('='))
                    break;
                else
                {
                    if (operation1 < 111111111 && Operator != '$')
                    {
                        operation2 = int.Parse(input);
                        switch (Operator)
                        {
                            case '+':
                                operation1 += operation2;
                                break;
                            case '-':
                                operation1 -= operation2;
                                break;
                            case '*':
                                operation1 *= operation2;
                                break;
                            default:
                                operation1 /= operation2;
                                break;
                        }
                        Operator = '$';
                    }
                    else
                        operation1 = int.Parse(input);
                }
            }
            Console.WriteLine($"{operation1}");
        }
    }
}