#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
//! Approach is easy
//? Build a exponentiator that can take overflows
//? Build a multiplier that can take overflows
//? BUild something that can find the sum of the digits

int power(long long int a, long long int b) {
    int res = 1;
    while(b) {
        if(b&1) {
            res = (res%mod * a%mod)%mod;
        }
        a = ((a%mod) * (a%mod))%mod;
        b>>=1;
    }
    return res;
}

int power9(long long a, long long b) {
    int res = 1;
    while(b){
        if(b & 1){
            res = ((res%9) * (a%9))%9;
        }
        a = ((a%9) * (a%9))%9;
        b>>=1; 
    }
    return res;
}

int mult(long long int a, long long int b) {
    int res = 0;
    while(b) {
        if(b&1) {
            res = (res%mod + a%mod)%mod;
        }
        a = ((a%mod) + (a%mod))%mod;
        b>>=1;
    }
    return res;
}


int sumOfDigits(int number) {
    int sum = 0;
    while(number) {
        sum += (number%10);
        number/=10;
    }
    return sum;
}

int solve(long long A, long long N){
    // int result = power(A,N);
    // while(sumOfDigits(result)!=result) {
    //     result = sumOfDigits(result);
    // }
    // return result;
    return power9(A,N) ? power9(A,N): 9;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout<<solve(7,0);

    return 0;
}