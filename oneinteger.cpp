#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
    priority_queue<int, vector<int>, greater<int> > heap;
    int sum = 0;
    for(auto x : nums) {
        heap.push(x);
    }
    while(heap.size()>1) {
        auto first = heap.top();
        heap.pop();
        auto second = heap.top();
        heap.pop();
        heap.push(first+second);
        sum+=first + second;
    }
    return sum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout<< solve(nums);
}