#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> stk;
    stack<int> minstk;
    MinStack() {

    }
    
    void push(int val) {
        stk.push(val);
        if(!minstk.empty()) {
            if(val < minstk.top()) {
                minstk.push(val);
            } else {
                minstk.push(minstk.top());
            }
        } else {
            minstk.push(val);
        }
    }
    
    void pop() {
        stk.pop();
        minstk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minstk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}