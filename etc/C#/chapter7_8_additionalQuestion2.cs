public static class MyMath
    {
        public static int Power(int input)
        {
            return input * input;
        }

        public static int Power(int input, int count)
        {
            int power = 1;

            for (int i = 1; i <= count; i++)
            {
                power *= input;
            }
            return power;
        }

        public static int SumAll(int end)
        {
            int sum = 0;

            for (int i = 0; i < end; i++)
            {
                sum += i;
            }
            return sum;
        }

        public static int SumAll(int start, int end)
        {
            int sum = 0;

            for (int i = start; i < end; i++)
            {
                sum += i;
            }
            return sum;
        }
    }

    class MainApp
    {
        public static void Main()
        {
            Console.WriteLine(MyMath.Power(3));
            Console.WriteLine(MyMath.Power(3, 5));
            Console.WriteLine(MyMath.SumAll(4));
            Console.WriteLine(MyMath.SumAll(2, 4));
        }
    }