#include <bits/stdc++.h>
using namespace std;

int numberOfBits(int n) {
    int ans=0;
    while(n>0) {
        n = n & (n-1);
        ans++;
    }
    return ans;
}

bool cmp(int a, int b) {
    return numberOfBits(a) < numberOfBits(b);
}


vector<int> sortByBits(vector<int> arr) {
    sort(arr.begin(), arr.end(), cmp);
    return arr;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> holder = { 258, 520, 518, 322, 88, 658, 688, 480, 216, 433, 818, 186, 315, 685, 963, 506, 767 };
    auto solution = sortByBits(holder);
    for(auto x : solution) {
        cout<<x << "\n";
    }

    

    return 0;
}