namespace roman_to_integer;

public class Solution
{
    public int RomanToInt(string s)
    {
        Dictionary<char, int> roman = new Dictionary<char, int>()
        {
            { 'I', 1 },
            { 'V', 5 },
            { 'X', 10 },
            { 'L', 50 },
            { 'C', 100 },
            { 'D', 500 },
            { 'M', 1000 },
        };
        int result = 0;
        for (int i = 0; i < s.Length; i++)
        {
            if (i < s.Length - 1 && (roman[s[i]] < roman[s[i + 1]]))
            {
                result -= roman[s[i]];
            }
            else
            {
                result += roman[s[i]];
            }
        }

        return result;
    }
}

/*
I             1
V             5
X             10
L             50
C             100
D             500
M             1000


*/