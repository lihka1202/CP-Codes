#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sol;
        for (int i = 0; i< 2; i+=1) {
            for(auto num : nums) {
                sol.push_back(num);
            }
        }
        return sol;
        
    }
};

int main() {
    cout<<stoi("5");
}