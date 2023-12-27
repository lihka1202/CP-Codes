#include<bits/stdc++.h>

using namespace std;

// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n <= 3) {
//             return n;
//         } else {
//             return climbStairs(n-1) + climbStairs(n-2);
//         }
        
//     }
// };

class Solution {
public:
    long long int climbStairs(int n) {
        if(n <= 3) {
            return n;
        } else {
            long long int prev = 2;
            long long int curr = 3;
            for(int i = 3; i<=n; i+=1) {
                long long int temp = curr;
                curr = prev + curr;
                prev = temp;
            }

            return prev;
        }
        
    }
};

int main() {

    int n;
    cin>>n;

    Solution A;
    cout<< A.climbStairs(n);

}