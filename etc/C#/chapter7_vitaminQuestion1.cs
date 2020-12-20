using System;

namespace chapter7
{
    static class Vitamin
    {
        //7장 비타민 문제 (확장 메소드)
        public static string Insert(this string originalString, string appendedString)
        {
            originalString += appendedString;
            return originalString;
        }
        
        public static void Main()
        {
            string hello = "Hello";
            Console.WriteLine(hello);
            Console.WriteLine(hello = hello.Insert(5, "^^")); //확장 전 기존 Insert메소드 사용(매개변수에 따라 구별)
            Console.WriteLine(hello.Insert(", World!")); //확장 후 Insert메소드 사용
        }
    }
}
