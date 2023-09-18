#include <bits/stdc++.h>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> occur;
    for(auto x : s) {
        occur[x]+=1;
    }
    for(int i = 0; i<s.size();++i){
        if(occur[s[i]]==1){
            return i;
        }
    }
    return -1; 
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string input;
    cin>>input;
    cout<<firstUniqChar(input);
    
}