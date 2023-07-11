namespace valid_parentheses;

public class Solution
{
    public bool IsValid(string s)
    {
        Dictionary<char, char> dict = new Dictionary<char, char>
        {
            { '(', ')' },
            { '[', ']' },
            { '{', '}' }
        };

        Stack<char> stack = new Stack<char>();
        foreach (var parenthese in s)
        {
            if (dict.ContainsKey(parenthese))
            {
                stack.Push(parenthese);
            }
            else if (stack.Count == 0 || parenthese != dict[stack.Pop()])
            {
                return false;
            }
        }

        return stack.Count == 0;
    }
}