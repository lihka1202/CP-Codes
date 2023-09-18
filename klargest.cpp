#include <bits/stdc++.h>

using namespace std;

int findKthLargest(vector<int> nums, int k) {
    priority_queue<int> heap;
    for(int x : nums){
        heap.push(x);
    }
    for(int i = 0; i<k-1; i+=1){
        heap.pop();
    }
    return heap.top();
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> input = {3,2,3,1,2,4,5,5,6};
    int k;
    cin>>k;
    cout<<findKthLargest(input, k);
}