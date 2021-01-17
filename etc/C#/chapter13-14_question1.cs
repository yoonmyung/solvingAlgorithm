namespace chapter13_14
{
    delegate int Calculate(int a, int b);

    class chapter1314_1
    {
        public static void Main()
        {
            Calculate calc1, calc2;

            calc1 = delegate (int a, int b)
            {
                return a + b;
            };

            calc2 = delegate (int a, int b)
            {
                return a - b;
            };

            Console.WriteLine(calc1(5, 6));
            Console.WriteLine(calc2(5, 6));
        }
    }
}