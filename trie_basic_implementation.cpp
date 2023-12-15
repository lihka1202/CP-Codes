#include<bits/stdc++.h>

using namespace std;


class TrieNode {
    public:
        unordered_map<char, TrieNode*> children_;
        bool word_ = false;
};

class Trie {
    TrieNode root_;

    void insert(string word) {
        TrieNode *curr = &root_;
        for(char c : word) {
            if(curr -> children_.count(c)==0){
                curr->children_[c] = new TrieNode();
            }
            curr =  curr->children_[c];
        }
        // At the end of the word:
        curr->word_ = true;
    }

    bool search(string word) {
        TrieNode *curr = &root_;
        for(char c : word) {
            if(curr -> children_.count(c) == 0) {
                return false;
            }
            curr = curr->children_[c];
        }
        // To ensure that the final character, does constitute the word
        // That was inserted
        return curr -> word_;

    }

    bool startsWith(string word) {
        TrieNode *curr = &root_;
        for(char c : word) {
            if(curr->children_.count(c)==0){
                return false;
            } else  {
                curr = curr->children_[c];
            }
        }
        return true;

    }
};


// to test the code
int main() {

}