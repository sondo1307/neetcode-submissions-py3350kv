class MyQueue {
private:
    stack<int> stMain;
    stack<int> stBack;

public:
    MyQueue() {}
    
    void push(int x) {
        int mainLen = stMain.size();
        for (int i = 0; i<mainLen; i++){
            stBack.push(stMain.top());
            stMain.pop();
        }
        stMain.push(x);
        int backLen = stBack.size();
        for(int i = 0; i< backLen; i++){
            stMain.push(stBack.top());
            stBack.pop();
        }
    }
    
    int pop() {
        int val = stMain.top();
        stMain.pop();
        return val;
    }
    
     int peek() {
        return stMain.top();
    }
    
     bool empty() {
        return stMain.empty();
    }
};
