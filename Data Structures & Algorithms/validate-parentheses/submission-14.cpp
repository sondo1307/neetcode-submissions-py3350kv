class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        for (auto c : s)
        {
            if (isOpen(c))
            {
                stack.push(c);
            }
            else
            {
                if (stack.empty()) return false;
                if (isPair(stack.top(), c) == false) return false;
                else stack.pop();
            }
        }

        return stack.empty();
    }

    bool isOpen(char ch)
    {
        return ch == '(' || ch == '[' || ch == '{';
    }

    bool isPair(char open, char close)
    {
        if ((open == '(' && close == ')') || (open == '[' && close == ']') || (open == '{' && close == '}')) return true;
        else return false;
    }
};