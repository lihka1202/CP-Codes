/**
 * Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.

He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before. On every subsequent Monday, he will put in $1 more than the previous Monday.
Given n, return the total amount of money he will have in the Leetcode bank at the end of the nth day.

 

Example 1:

Input: n = 4
Output: 10
Explanation: After the 4th day, the total is 1 + 2 + 3 + 4 = 10.
Example 2:

Input: n = 10
Output: 37
Explanation: After the 10th day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4) = 37. Notice that on the 2nd Monday, Hercy only puts in $2.
Example 3:

Input: n = 20
Output: 96
Explanation: After the 20th day, the total is (1 + 2 + 3 + 4 + 5 + 6 + 7) + (2 + 3 + 4 + 5 + 6 + 7 + 8) + (3 + 4 + 5 + 6 + 7 + 8) = 96.
 

Constraints:

1 <= n <= 1000
*/

#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    if(n<=7){
        cout << (n*(n+1))/2;
    } else {
        int quotient = n/7;
        cout<<"Quotient is: " << quotient << '\n';
        int rem = n % 7;
        cout<<"Remainder is: " << rem << '\n';
        cout<<"First Part (Base quotient) : " << (quotient * 28)<<endl;
        cout<<"Second Part (Extra quotient) : " << (((quotient-1)*quotient)/2)*7<<endl;
        cout<<"Remainder Calculation : " << (rem)*(rem+1)/2 <<endl;
        cout<<"Extra parts at the end : " << rem*quotient<<endl;
        int sum =  (quotient * 28) + (((quotient-1)*quotient)>>1)*7 + ((rem)*(rem+1)>> 1) + rem*quotient;
        cout<<sum;
    }

    

    return 0;
}

/**
 * ! Beats 49.74%of users with C++
 * ! Beats 6.05%of users with C++
*/