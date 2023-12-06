#include <bits/stdc++.h>
using namespace std;


int factorial(int n){
    if(n==1){
        return n;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    cout<<factorial(n);



    return 0;
}