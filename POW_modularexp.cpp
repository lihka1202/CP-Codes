#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int mod = 1e9 + 7;

int power(int a, int b) {
    int res = 1;
    while(b) {
        if(b & 1) {
            res*=a;
            res%=mod; // bring the number below 1e9 + 7
        }
        a*=a;
        a%=mod;
        b>>=1;
    }
    return res;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << power(2,200);
    return 0;
}