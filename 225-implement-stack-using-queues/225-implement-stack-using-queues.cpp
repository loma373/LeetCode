class MyStack {
    queue<int> q1,q2;
    int size=0;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        size++;
        q2.push(x);
        
        while(!q1.empty()){
            int a=q1.front();
            q2.push(a);
            q1.pop();
        }
        
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    
    int pop() {
        int a=q1.front();
        size--;
        q1.pop();
        return a;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(size<=0)
            return true;
        
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */