public class Solution {
    public int Trap(int[] height) {
        int maxL = height[0];
        int maxR = height[^1];
        int l = 0;
        int r = height.Length - 1;
        var res = 0;
        while (l<r)
        {
            if (maxL < maxR)
            {
                l++;
                maxL = Math.Max(maxL, height[l]);
                res += maxL - height[l];
            }
            else
            {
                r--;
                maxR = Math.Max(maxR, height[r]);
                res += maxR - height[r];
            }
        }

        return res;
    }
}