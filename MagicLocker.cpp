#include <bits/stdc++.h>
using namespace std;

#define int long long int


const int mod = 1e9 + 7;

int power(int a, int b) {
    int result = 1;
    while(b) {
        if(b & 1) {
            result*=a;
            result%=mod;
        }
        a*=a;
        a%=mod;
        b>>=1;
    }
    return result;
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int max_amount = 1;
    while(n>0) {
        if(n<=4){
            max_amount = (max_amount%mod * n)%mod;
            n=0;
        } else {
            int value=0;
            int sub_value = 0;
            if(n%3==1) {
                value = power(3,(n/3)-1);
                sub_value = (3%mod * ((n/3)-1)%mod)%mod;
            } else {
                value = power(3,(n/3));
                sub_value = (3%mod * ((n/3))%mod)%mod;
            }
            n = (n%mod - sub_value)%mod;
            max_amount = ((max_amount % mod) * value)%mod;
        }
    }
    cout<<max_amount;
    return 0;
}