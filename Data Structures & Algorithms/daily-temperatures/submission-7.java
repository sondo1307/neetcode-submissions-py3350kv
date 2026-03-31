class Solution
{
    public int[] dailyTemperatures(int[] temperatures)
    {
        Stack<Map.Entry<Integer, Integer>> stack = new Stack<>();
        int[] result = new int[temperatures.length];
        for (int i = 0; i < temperatures.length; i++)
        {
            if (stack.size() > 0)
            {
                while (!stack.isEmpty() && stack.peek().getKey() < temperatures[i])
                {
                    int topIndex = stack.peek().getValue();
                    result[topIndex] = i - topIndex;
                    stack.pop();
                }
            }
            stack.push(Map.entry(temperatures[i], i));
        }

        return result;
    }
}