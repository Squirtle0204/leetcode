class MinStack {
public:
stack<long long >st;
long long min= INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        long long val=value;
        if(st.empty()){
           min = val;
           st.push(val);
        }
        else if(val>min){
            st.push(val);
        }
        
        else{
            st.push(2*val- min);
            min = val;
        } 
        
    }
    
    void pop() {
        if(st.empty())return;

        long long x = st.top();
        st.pop();
        if(x < min){
            min = 2 * min - x;
        }
        
    }
    
    int top() {
        if(st.empty()) return 0;

        long long x = st.top();
        if( min < x) return x;

        else return min;
            
        
    }
    
    int getMin() {
        return min;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */