#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
    int overallXOR = 0;
    int oneNumberXOR = 0;
    int setPos = 0;
    vector<int> sol;
    for(auto x : nums) {
        overallXOR ^= x;
    }
    int copy = overallXOR;
    cout<<"copy:"<<" "<<copy<<endl;
    
    for(int i = 0; i<31;i++) {
        if((copy&1)==1) {
            setPos = i;
            cout<<"break:"<<" "<<i<<endl;
            break;
        } else {
            copy>>=1;
        }
    }
    int bitmask = (1<<setPos);
    cout<<"bitmask:"<<" "<<bitmask<<endl;
    for(auto x : nums) {
        if((x&bitmask)==0) {
            cout<<"number:"<<" "<<x<<endl;
            oneNumberXOR ^= x;
        }
    }
    sol.push_back(oneNumberXOR);
    sol.push_back((oneNumberXOR ^ overallXOR));
    return sol;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> input = {1,2,1,3,2,5};
    auto OP = singleNumber(input);
    for(auto x : OP) {
        cout<<x<<endl;
    }    

    return 0;
}