class Solution
{
    public boolean isValid(String s)
    {
        Stack<Character> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s.charAt(i);
            if (IsOpen(ch))
            {
                stack.push(ch);
            }
            else
            {
                if (stack.isEmpty())
                {
                    return false;
                }
                if (IsPair(stack.peek(), ch))
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }

    public boolean IsOpen(char ch)
    {
        return ch == '(' || ch == '[' || ch == '{';
    }

    public boolean IsPair(char ch1, char ch2)
    {
        if (ch1 == '(' && ch2 == ')')
        {
            return true;
        }
        if (ch1 == '[' && ch2 == ']')
        {
            return true;
        }
        if (ch1 == '{' && ch2 == '}')
        {
            return true;
        }
        return false;
    }
}