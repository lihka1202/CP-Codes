#include <bits/stdc++.h>
using namespace std;
/**
 * So far I would say that I see three ways to do this
 * 
*/
class Compare{
    public:
        bool operator()(pair<int,int> a, pair<int,int> b) {
            return abs(a.first-a.second) > abs(b.first-b.second);
        }
};

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
    vector<pair<int,int>> modded_holder;
    for(int a: arr) {
        pair<int,int> temp;
        temp.first=a;
        temp.second=x;
        pq.push(temp);
    }
    vector<int> solution;
    while(k>0) {
        auto temp = pq.top();
        pq.pop();
        solution.push_back(temp.first);
        k-=1;
    }
    sort(solution.begin(), solution.end());
    return solution;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> holder = {1,2,3,4,5};
    auto response = findClosestElements(holder, 4, 3);
    for(auto x : response) {
        cout<<x<<endl;
    }
    

    return 0;
}