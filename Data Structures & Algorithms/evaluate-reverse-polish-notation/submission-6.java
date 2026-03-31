class Solution
{
    public int evalRPN(String[] tokens)
    {
        int val = 0;

        Stack<Integer> stack = new Stack<>();
        for (String s : tokens)
        {
            if (s.equals("+") || s.equals("-") || s.equals("*") || s.equals("/"))
            {
                int num2 = stack.pop();
                int num1 = stack.pop();
                val = switch (s)
                {
                    case "+" -> num1 + num2;
                    case "-" -> num1 - num2;
                    case "*" -> num2 * num1;
                    default -> num1 / num2;
                };
                stack.push(val);
            }
            else
            {
                stack.push(Integer.parseInt(s));
            }
        }

        return stack.peek();
    }
}