#include <bits/stdc++.h>
using namespace std;

int maximumScore(int a, int b, int c) {
    priority_queue<int> heap;
    heap.push(a);
    heap.push(b);
    heap.push(c);
    int sum = 0;
    while(heap.top()>0) {
        int first;
        if(heap.top()>0) {
            first = heap.top();
            heap.pop();
        }

        int second = 0;
        if(heap.top()>0) {
            second =heap.top();
            heap.pop();
        } else {
            break;
        }
        heap.push(first-1);
        heap.push(second-1);
        sum+=1;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    cout<< maximumScore(a,b,c);
    return 0;
}