#include <bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y ) {
    int distance = 0;
    while(x>0 || y>0) {
        int a = x&1;
        int b = y&1;
        if(a != b) {
            distance+=1;
            // cout<<a<<" "<<b<<" "<<distance<<endl;
            // cout<<x<<" "<<y<<endl;
        }
        x=x>>1;
        // cout<<x<<endl;
        y=y>>1;
        // cout<<y<<endl;
    }
    return distance;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin>>x>>y;
    cout<<hammingDistance(x,y);
    

    return 0;
}