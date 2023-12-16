#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack_;
        for(char c : s) {
            if(c == '(' || c=='{' || c=='[') {
                stack_.push(c);
            } else if( (stack_.empty()) || (c == '}' && stack_.top()!='{') || (c == ')' && stack_.top()!='(') || (c == ']' && stack_.top()!='[')) {
                return false; 
            } else {
                stack_.pop();
            }
        }
        if(!stack_.empty()) {
            return false;
        } else {
            return true;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = "]";
    Solution a;
    cout << a.isValid(s);
    

    return 0;
}