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
                int n = stack.size();
                for (int j = 0; j < n; j++)
                {
                    int topTemp = stack.peek().getKey();
                    int topIndex = stack.peek().getValue();
                    if (topTemp < temperatures[i])
                    {
                        result[topIndex] = i - topIndex;
                        stack.pop();
                    }
                }
            }
            stack.push(Map.entry(temperatures[i], i));
        }

        return result;
    }
}

