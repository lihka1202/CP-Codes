#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9 + 7;
const int sz = 2;
struct Mat {
    int m[sz][sz];
    Mat() {
        memset(m,0,sizeof(m));
        //creates a 2x2 matrix with 0 in all the positions
    }
    void identity() {
        for(int i = 0; i< sz ; i+=1) {
            m[i][i]=1;
        }
    }
    
    Mat operator* (Mat a) {
        Mat res;
        for(int i = 0; i<sz;i+=1) {
            for(int j = 0; j < sz ; j+=1) {
                for(int k = 0; k < sz ; k+=1) {
                    res.m[i][j] += m[i][k] * a.m[k][j];
                    res.m[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

int Fib(int n) {
    Mat res;
    res.identity();
    Mat T;
    T.m[0][0] = T.m[0][1] = T.m[1][0] = 1;
    if(n<=2) {
        return 1;
    } else {
        n-=2;
        while(n) {
            if(n&1) res = res * T;
            T = T*T;
            n>>=1;
        }
    }
    return (res.m[0][0] + res.m[0][1])%mod;
}

void solve(int m, int n) {
    //! Based on the formula: S(M) - S(N-1) = F(M+2) - F(N+1)
    int f_m = Fib(m+2);
    int f_n = Fib(n+1);
    int solution = (f_m - f_n) % mod;
    cout<<solution<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int m,n;
        cin>>m>>n;


        solve(m,n);
    }

    return 0;
}