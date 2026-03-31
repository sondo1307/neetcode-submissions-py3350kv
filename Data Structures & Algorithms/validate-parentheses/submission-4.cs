public class Solution {
    public bool IsValid(string s)
    {
        Stack<char> stack = new Stack<char>();
        foreach (var c in s)
        {
            if (IsOpen(c))
            {
                stack.Push(c);
            }
            else
            {
                if (stack.Count > 0 && IsEqual(c, stack.Peek()))
                {
                    stack.Pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return stack.Count == 0;
    }
    
    public bool IsOpen(char c)
    {
        return c == '(' || c == '[' || c == '{';
    }

    public bool IsEqual(char c, char top)
    {
        return ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{'));
    }
}