class MinStack
{
    stack<long> st;
    long min;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        if (st.empty())
        {
            st.push(0);
            min = val;
        }
        else
        {
            st.push(val - min);
            if (val < min) min = val;
        }
    }

    void pop()
    {
        if (st.empty()) return;
        auto t = st.top();
        st.pop();
        if (t < 0) min = min - t;
    }

    int top()
    {
        auto t = st.top();
        return (t > 0) ? (int)(t + min) : (int)min;
    }

    int getMin()
    {
        return (int)min;
    }
};