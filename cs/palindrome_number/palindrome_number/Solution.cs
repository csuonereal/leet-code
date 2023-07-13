namespace palindrome_number;

public class Solution
{
    public bool IsPalindrome(int x)
    {
        string xString = x.ToString();
        int lenthOfX = xString.Length;
        if (xString[0] != xString[lenthOfX - 1])
        {
            return false;
        }
        if (lenthOfX == 1)
        {
            return true;
        }
        for (int i = 0; i < lenthOfX / 2; i++)
        {
            if (xString[i] != xString[lenthOfX - 1 - i])
            {
                return false;
            }
        }

        return true;
    }
}