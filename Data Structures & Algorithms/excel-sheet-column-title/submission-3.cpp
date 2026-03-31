class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        stack<char> s;
        while (columnNumber > 0)
        {
            char a = (--columnNumber) % 26 + 'A';
            s.push(a);
            cout << a << endl;
            columnNumber /= 26;
        }

        stringstream ss;
        while (!s.empty())
        {
            char a = s.top();
            ss << a;
            s.pop();
        }

        return ss.str();
    }
};