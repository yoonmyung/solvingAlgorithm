using System.Linq;

namespace chapter15_16 {
    public static class Solution
    {
        public static object solution(int[] arr)
        {
            int i = 0, min = 0;
            var answerArr = from num in arr
                            orderby num
                            select num;
            foreach (var num in answerArr)
            {
                if (i == 0)
                {
                    min = (int)num;
                }
                if (min == arr[i])
                {
                    arr[i] = -1;
                    break;
                }
                i++;
            }
            var answer = from num in arr
                         where num > 0
                         select num;
            if (answer.Count() <= 0)
            {
                answer = answer.Append(-1).ToList();
            }

            return answer;
        }
    }
}