public class MyQueue {
    // Khởi tạo stack trực tiếp hoặc trong Constructor
    private Stack<int> stMain = new Stack<int>();
    private Stack<int> stBack = new Stack<int>();

    public MyQueue() {
    }
    
    public void Push(int x) {
        // Chuyển toàn bộ phần tử sang stack phụ
        while (stMain.Count > 0) {
            stBack.Push(stMain.Pop());
        }
        
        // Thêm phần tử mới vào đáy
        stMain.Push(x);
        
        // Chuyển ngược lại về stack chính
        while (stBack.Count > 0) {
            stMain.Push(stBack.Pop());
        }
    }
    
    public int Pop() {
        return stMain.Pop();
    }
    
    public int Peek() {
        return stMain.Peek();
    }
    
    public bool Empty() {
        return stMain.Count == 0;
    }
}
