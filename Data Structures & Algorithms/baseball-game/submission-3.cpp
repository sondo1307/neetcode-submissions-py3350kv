class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> st;
        int res = 0;

        for (auto c: operations)
        {
            if (c.at(0) == '+')
            {
                auto top = st.top();
                st.pop();
                auto newTop = top + st.top();
                st.push(top);
                st.push(newTop);
                res += newTop;
            }
            else if (c.at(0) == 'D')
            {
                auto val = st.top() * 2;
                st.push(val);
                res += val;
            }
            else if (c.at(0) == 'C')
            {
                res -= st.top();
                st.pop();
            }
            else
            {
                st.push(stoi(c));
                res += st.top();
            }

        }

        return res;
    }
};