#include <bits/stdc++.h>
using namespace std;
// adding a comment here
class Solution {
public:
    int calPoints(vector<string>& operations) {
        // Utilize a stack to solve this problem
        // utilize stoi to deal with the math
        stack<int> stk;
        for(auto c : operations) {
            if(c == "C") {
                stk.pop();
            } else if(c == "D") {
                stk.push(stk.top() * 2);
            } else if(c == "+") {
                int topNumber = stk.top();
                stk.pop();
                int secondNumber = stk.top();
                stk.pop();
                stk.push(secondNumber);
                stk.push(topNumber);
                stk.push(secondNumber + topNumber);
            } else {
                stk.push(stoi(c));
            }
        }
        int sum = 0;
        while(!stk.empty()) {
            sum += stk.top();
            stk.pop();
        }

        return sum;
        

    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution a;
    vector<string> operations = {"1","C"};
    cout << a.calPoints(operations);
    

    return 0;
}
