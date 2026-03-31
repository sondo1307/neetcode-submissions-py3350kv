class MyStack
{
public:
    queue<int> qu;

    MyStack()
    {
    }

    void push(int x)
    {
        qu.push(x);
    }

    int pop()
    {
        vector<int> list;
        int size = qu.size();
        for (int i = 0; i < size - 1; i++)
        {
            list.push_back(qu.front());
            qu.pop();
        }
        int top = qu.back();
        qu.pop();
        for (int i: list)
        {
            qu.push(i);
        }
        return top;
    }

    int top()
    {
        vector<int> list;
        int size = qu.size();
        for (int i = 0; i < size; i++)
        {
            list.push_back(qu.front());
            qu.pop();
        }
        for (int i: list)
        {
            qu.push(i);
        }
        return list[list.size() - 1];
    }

    bool empty()
    {
        return qu.empty();
    }
};
