using System;
using System.Collections.Generic;
using System.Text;

//enum은 Main() 함수 바깥, class 내부에 정의해야한다. 하나의 자료형으로 취급되기 때문
namespace RectArea
{
    class MainApp
    {
        //3장 연습문제 4번
        public static void Main()
        {
            Console.WriteLine("사각형의 너비를 입력하세요.");
            string width = Console.ReadLine();

            Console.WriteLine("사각형의 높이를 입력하세요.");
            string height = Console.ReadLine();

            int? area = null;
            area = int.Parse(width) * int.Parse(height);

            Console.WriteLine("사각형의 넓이는 : {0}", area);
        }
    }

    class MainApp2
    {
        //4장 연습문제
        public static void Main()
        {
            int a = 0xF0 | 0x0F;
            Console.WriteLine($"{a:x}");

            int b = 10;
            string c = b == 0 ? "가나다" : "ABC";
            Console.WriteLine($"{c}");
        }
    }
}
