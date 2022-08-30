class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty()) 
            return -1;
        while(s1.size()>1){
            int temp=s1.top();
            s2.push(temp);
            s1.pop();
        }
        int ans=s1.top();
        s1.pop();
        while(!s2.empty()){
            int a=s2.top();
            s1.push(a);
            s2.pop();
        }
        return ans;
    }
    
    int peek() {
        if(s1.empty()) 
            return -1;
        while(s1.size()>1){
            int temp=s1.top();
            s2.push(temp);
            s1.pop();
        }
        int ans=s1.top();
        while(!s2.empty()){
            int a=s2.top();
            s1.push(a);
            s2.pop();
        }
        return ans;
    }
    
    bool empty() {
        
        if(s1.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */