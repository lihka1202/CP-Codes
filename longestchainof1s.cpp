#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    int curr_count = 0;
    int max_count = 0;
    while(n>0) {
        if((n&1)==1) {
            curr_count+=1;
            if(curr_count > max_count){
                max_count=curr_count;
            }
        } else {
            if(curr_count>0) {
                curr_count=0;
            } 
        }
        n = n>>1;
    }
    return max_count;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    cout<<solve(n);
    // cout<<(n&1);
    


    return 0;
}