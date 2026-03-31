class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int gridSize = grid[0].size();
        vector<int> res(2, 0);
        vector<int> arr(gridSize * gridSize, 0);
        for (int i = 0; i < grid.size(); i++)
        {
            for(int j=0; j< grid[i].size(); j++)
            {
                int index = grid[i][j]-1;
                arr[index]++;
            }
        }
        for(int i = 0; i< arr.size(); i++)
        {
            if(arr[i]==0) res[1] = i+1;
            if(arr[i]==2) res[0] = i+1;
        }

        return res;
    }
};