public class Solution {
    public int MaxArea(int[] heights)
    {
        int l = 0;
        int r = heights.Length - 1;
        int max = 0;
        while (l<r)
        {
            int w = r - l;
            int h = Math.Min(heights[l], heights[r]);
            int area = w * h;
            max = Math.Max(max, area);
            if (heights[l] < heights[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        
        return max;
    }
}