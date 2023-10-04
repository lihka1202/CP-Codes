#include <bits/stdc++.h>
using namespace std;

int powr(int a, int b) {
    int res = 1;
    while(b) {
        if(b & 1) {
            res*=a;
        }
        a*=a;
        b>>=1;
    }
    return res;
};

string solve(int A,int B, int C){
    if(powr(A,C)<powr(B,C)) {
        return "<";
    } else if(powr(A,C) > powr(B,C)) {
        return ">";
    } else {
        return "=";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B,C;
    cin>>A>>B>>C;
    cout<< solve(A,B,C);
    return 0;
}