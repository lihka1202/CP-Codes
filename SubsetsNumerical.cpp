#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> sol;
    for(int i = 0 ; i<1<<nums.size(); i+=1) {
        int copy = i;
        vector<int> indiv ={};
        for(auto x : nums) {
            if(copy&1){
                indiv.push_back(x);
            }
            copy>>=1;
        }
        sol.push_back(indiv);
    }
    return sol;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1,2,3};
    int counter = 0;
    auto sol = subsets(nums);
    for(auto row : sol) {
        cout<<"This is: "<<counter<<" index"<<endl;
        for(auto number : row) {
            cout<<"\t"<<number;
        }
        counter+=1;
        cout<<endl;
    }

    

    return 0;
}