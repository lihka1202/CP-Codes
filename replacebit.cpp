#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M,i,j;
    cin>>N>>M>>i>>j;
    N = N & ((-1<<(j+1)) | ~(-1<<(i)));
    M = M<<i;
    int solution = N|M;
    cout<<solution;

    

    return 0;
}