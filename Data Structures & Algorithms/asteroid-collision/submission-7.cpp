class Solution {
public:
    vector<int> asteroidCollision(vector<int> &asteroids) {
        stack<int> s;
        vector<int> result;
        for (int a: asteroids) {
            if (s.empty() || (s.top() * a) > 0 || (s.top() < 0 && a > 0)) {
                s.push(a);
                continue;
            }
            if (a < 0) {
                bool last = true;
                while (!s.empty() && s.top() > 0) {
                    int t = s.top();
                    if (t < abs(a)) {
                        s.pop();
                        cout << "a1" << endl;
                    } else if (t == abs(a)) {
                        s.pop();
                        last = false;
                        cout << "a2" << endl;
                        break;
                    } else {
                        last = false;
                        cout << "a3" << endl;
                        break;
                    }
                }
                if (last) s.push(a);
            }
        }

        while (!s.empty()) {
            result.push_back(s.top());
            s.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
