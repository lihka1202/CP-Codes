#include<bits/stdc++.h>

using namespace std;

//testing to see if push can be makde via github

class MyStack {
public:
    queue<int> stack_;
    queue<int> aux_;
    MyStack() {
        
    }
    
    void push(int x) {
        //empty the main stack into an auxilary stack
        for(int i = 0; i < stack_.size(); i+=1) {
            aux_.push(stack_.front());
            stack_.pop();
        }

        //push the current element to the front
        stack_.push(x);

        //empty aux and fill stack_ again.
        for(int i = 0; i< aux_.size() ; i+=1) {
            stack_.push(aux_.front());
            aux_.pop();
        }
        
    }
    
    int pop() {
        //Just pop the front
        int temp = stack_.front();
        stack_.pop();
        return temp;
        
        
    }
    
    int top() {
        //return the front
        return stack_.front();
        
    }
    
    bool empty() {
        return stack_.empty();
        
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

int  main() {
    MyStack* obj = new MyStack();
    obj->push(1);
    obj->push(2);
    obj->push(3);
    cout << obj->top();
    obj->pop();
}