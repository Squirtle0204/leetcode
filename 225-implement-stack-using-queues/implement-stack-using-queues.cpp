#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q;
public:
    MyStack() = default;

    void push(int x) {
        q.push(x);
        int n = q.size();
        for (int i = 1; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) throw runtime_error("Stack is empty");
        int topVal = q.front();
        q.pop();
        return topVal;
    }

    int top() {
        if (q.empty()) throw runtime_error("Stack is empty");
        return q.front();
    }

    bool empty() const {
        return q.empty();
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