#include <bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int> candies) {
    unordered_map<int,int> holder;
    for(int x : candies) {
        holder[x]+=1;
    }
    if((candies.size()/2)>holder.size()) {
        return holder.size();
    } else  {
        return candies.size()/2;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> holder = {1,1,2,2,3,3};
    cout<< distributeCandies(holder)<<endl;

    return 0;
}