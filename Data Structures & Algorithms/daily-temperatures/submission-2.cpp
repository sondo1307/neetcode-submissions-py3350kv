class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        stack<tuple<int, int> > s;
        vector<int> res(temperatures.size());
        for (int i = 0; i < temperatures.size(); i++)
        {
            if (s.size() > 0)
            {
                int stackCount = s.size();
                for (int j = 0; j < stackCount; j++)
                {
                    auto [temp, index] = s.top();

                    if (temperatures[i] > temp)
                    {
                        s.pop();
                        res[index] = i - index;
                    }
                }
            }
            s.push(make_tuple(temperatures[i], i));
        }

        return res;
    }
};