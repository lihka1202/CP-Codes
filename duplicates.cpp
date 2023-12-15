#include<bits/stdc++.h>

using namespace std;



int main()
{
    vector<int> input = {1,2,3,4,5};
    unordered_set<int> holder = {};
    for(auto num : input) {
        holder.insert(num);
    }

    if(input.size() == holder.size()) {
        cout<< "True" << endl;
    } else {
        cout<< "False" << endl;
    }
}