class Solution {
public:
vector<int> decode(vector<int>& encoded, int first) {
    vector<int> solution;
    solution.push_back(first);
    for(auto x : encoded){
        solution.push_back(first^x);
        first = first ^ x;
        
    }
    return solution;
}
};