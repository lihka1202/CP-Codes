#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        // When flag is 0, merge word1
        // When flag is 1, merge word2
        bool flag = false;
        int i = 0;
        int j = 0;
        string sol = "";
        while (i < word1.size() && j < word2.size()) {
            if (!flag) {
                sol += word1[i++];
                flag = true;
            } else {
                sol += word2[j++];
                flag = false;
            }
        }
        if (i == word1.size()) {
            while (j < word2.size()) {
                sol += word2[j++];
            }
        }
        if (j == word2.size()) {
            while (i < word1.size()) {
                sol += word1[i++];
            }
        }
        return sol;
    }
};

int main() {
    string A = "aa";
    string B = "bbb";

    Solution S;
    cout << S.mergeAlternately(A, B);
}