class Solution {
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (auto i: tokens)
        {
            if (i == "+" || i == "-" || i == "*" || i == "/")
            {
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                int val;
                if (i == "+")
                {
                    val = num1 + num2;
                }
                else if (i == "-")
                {
                    val = num1 - num2;
                }
                else if (i == "*")
                {
                    val = num1 * num2;
                }
                else if (i == "/")
                {
                    val = num1 / num2;
                }
                st.push(val);
            }
            else
            {
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};