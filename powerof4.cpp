#include <bits/stdc++.h>
using namespace std;

#define BINARYHOLDER1 1431655765
//this is 1010101010101010101010101010101 

// Sending this with multiple git profiles and local hits
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int number;
    cin>>number;
    cout << (number & (number-1)==0) && (number & BINARYHOLDER1)==number;

    return 0;
}
