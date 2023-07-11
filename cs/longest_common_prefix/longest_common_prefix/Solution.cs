namespace longest_common_prefix;

public class Solution
{
    public int CalculateShortestStringLength(string[] strs)
    {
        int smallest = strs[0].Length;
        foreach (var str in strs)
        {
            if (str.Length < smallest)
                smallest = str.Length;
        }

        return smallest;
    }

    public bool IsAllConditionsOK(string[] strs)
    {
        if (strs.Contains(""))
        {
            return false;
        }

        foreach (var str in strs)
        {
            if (str[0] != strs[0][0])
            {
                return false;
            }
        }
        return true;
    }

    public bool CheckIfAllStringsContainCharAtIndex(string[] strs, int index)
    {
        foreach (var str in strs)
        {
            if (str[index] != strs[0][index])
            {
                return false;
                break;
            }
        }

        return true;
    }

    public string LongestCommonPrefix(string[] strs)
    {
        int smallest = CalculateShortestStringLength(strs);
        string prefix = "";

        if (!IsAllConditionsOK(strs))
            return prefix;

        for (int i = 0; i < smallest; i++)
        {
            if (!CheckIfAllStringsContainCharAtIndex(strs, i))
            {
                break;
            }

            prefix += strs[0][i];
        }

        return prefix;
    }
}