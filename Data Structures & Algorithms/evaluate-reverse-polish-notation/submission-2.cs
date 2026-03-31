public class Solution
{
    public int EvalRPN(string[] tokens)
    {
        Stack<int> stack = new Stack<int>();

        foreach (var s in tokens)
        {
            if (int.TryParse(s, out var i))
            {
                stack.Push(i);
            }
            else
            {
                int temp = stack.Pop();
                switch (s)
                {
                    case "+":
                        temp += stack.Pop();
                        stack.Push(temp);
                        break;
                    case "-":
                        temp = stack.Pop() - temp;
                        stack.Push(temp);
                        break;
                    case "*":
                        temp = stack.Pop() * temp;
                        stack.Push(temp);
                        break;
                    case "/":
                        temp = stack.Pop() / temp;
                        stack.Push(temp);
                        break;
                }
                Console.WriteLine(temp);
            }
        }

        return stack.Pop();
    }
}