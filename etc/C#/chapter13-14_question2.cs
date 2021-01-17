namespace chapter13_14
{
    class chapter1314_2
    {
        delegate int[] BubbleSort(int[] nums);

        public static void Main()
        {
            int[] numbers = new int[7];
            bool isSorted = true;
            
            BubbleSort bubbleSort = delegate(int[] nums)
            {
                int interval = 1;
                while (interval <= 6)
                {
                    for (int i = 0; i < nums.Length - interval; i++)
                    {
                        if (nums[i] > nums[i + interval])
                        {
                            int term = nums[i];
                            nums[i] = nums[i + interval];
                            nums[i + interval] = term;
                            isSorted = false;
                        }
                    }
                    if (isSorted)
                    {
                        interval++;
                    }
                    isSorted = true;
                }
                return nums;
            };

            string[] input = Console.ReadLine().Split(' ');
            for (int i = 0; i < 7; i++)
            {
                numbers[i] = int.Parse(input[i]);
            }
            numbers = bubbleSort(numbers);
            foreach (int number in numbers)
            {
                Console.Write($"{number} ");
            }
        }
    }
}