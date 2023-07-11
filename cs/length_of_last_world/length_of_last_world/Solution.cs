namespace length_of_last_world;

public class Solution
{
    public int LengthOfLastWord(string s)
    {
        s = s.Trim();
        if (s == "") return 0;
        var words = s.Split(' ');
        return words[words.Length - 1].Length;
    }
}