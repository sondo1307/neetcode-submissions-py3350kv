class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int arr[101] ={0};
        for (int i : nums)
        {
            arr[i]++;
        }

        int res = 0;
        for (int i : arr)
        {
            res += cal(i);
        }

        return res;
    }

    int cal(int n)
    {
        int sum = 0;
        for (int i = 1;i < n; i++)
        {
            sum += i;
        }
        cout<<n <<" "<< sum<< endl;

        return sum;
    }
};