class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        vector<char> v;
        int l = 0;
        int r = k - 1;

        int count = -1;
        unordered_map<char, int> mp;

        for (int i = l; i<= r; i++)
        {
            mp[blocks[i]]++;
        }

        while (r < blocks.size())
        {
        
            int c = mp['W'];
            cout<< c<< endl;
            if (count == -1) count = c;
            else count = min(count, c);
            mp[blocks[l]]--;
            l++;
            r++;
            mp[blocks[r]]++;            
        }

        return count;
    }
};