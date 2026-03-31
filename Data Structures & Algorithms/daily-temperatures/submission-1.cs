public class Solution {
    public int[] DailyTemperatures(int[] temperatures) {
        int[] res = new int[temperatures.Length];
        
        // We only store the INDEX in the stack now!
        Stack<int> stack = new Stack<int>(); 

        for (int i = 0; i < temperatures.Length; i++) {
            
            // Look at the index at the top of the stack, 
            // and use it to check the temperatures array
            while (stack.Count > 0 && temperatures[i] > temperatures[stack.Peek()]) {
                int oldIndex = stack.Pop();
                res[oldIndex] = i - oldIndex;
            }
            
            stack.Push(i);
        }
        
        return res;
    }
}