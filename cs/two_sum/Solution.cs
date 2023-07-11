namespace two_sum;

public class Solution
{
    private int[] _twoSum = new int[] { };

    public int[] TwoSum(int[] nums, int target)
    {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (dict.ContainsKey(target - nums[i]))
            {
                _twoSum = new int[] { dict[target - nums[i]], i };
                return new int[] { dict[target - nums[i]], i };
            }

            if (!dict.ContainsKey(nums[i]))
                dict.Add(nums[i], i);
        }

        return new int[] { };
    }

    public void Print()
    {
        Console.Write($"[{_twoSum[0]},{_twoSum[1]}]");
    }
}