#include <bits/stdc++.h>
using namespace std;

string getHint(string secret, string guess) {
    //! Keep track of the number of cows first, could use a static array fill since its only digits.
    //! Basically keep an array from 0-9, use fill to generate a vector of size 10 for both the secret and the guesses.
    //! Run through 0-9, and if the values are non-zero, take the min of them both, and add this to the number of cows
    //! Then do a one by one check of the guess and the string, if they add up, well and good
    //! if they match the position, subtract from the cows and add to the bull
    unordered_map<char,unordered_set<int>> secret_map;
    unordered_map<char, unordered_set<int>> guess_map;
    int bulls = 0;
    int cows = 0;

    for(int i = 0; i<secret.length();i+=1){
        secret_map[secret[i]].insert(i);
        guess_map[guess[i]].insert(i);
    }

    for(auto start = secret_map.begin();start!=secret_map.end();start++) {
        if(guess_map.count(start->first)==1){
            // cout<<"This is the case of: "<<start->first<<"\n";
            int internal_bull = 0;
            int internal_cow = 0;
            for(const auto& el : start->second){
                if(guess_map[start->first].count(el)==1) {
                    internal_bull+=1;
                }
            }
            internal_cow = min(guess_map[start->first].size(), start->second.size()) - internal_bull;
            // cout<<"\t"<<"internal cow : "<<" "<<internal_cow<<"\n";
            cows+=internal_cow;
            bulls+=internal_bull;

        }
    }
    return to_string(bulls) + "A" + to_string(cows) + "B"; 
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string secret;
    string guess;
    cin>>secret>>guess;
    cout<<getHint(secret, guess);
    return 0;
}