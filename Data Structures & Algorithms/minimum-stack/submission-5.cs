public class MinStack
{
    Stack<int> stack = new Stack<int>();
    Stack<int> minStack = new Stack<int>();

    public MinStack()
    {
    }

    public void Push(int val)
    {
        stack.Push(val);
        minStack.Push(Math.Min(minStack.Count == 0 ? val : minStack.Peek(), val));
    }

    public void Pop()
    {
        if (stack.Count == 0)
        {
            return;
        }

        stack.Pop();
        minStack.Pop();
    }

    public int Top()
    {
        return stack.Peek();
    }

    public int GetMin()
    {
        return minStack.Peek();
    }
}