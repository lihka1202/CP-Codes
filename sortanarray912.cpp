#include <bits/stdc++.h>

using namespace std;


class Solution {
public:

    void merge(vector<int>& arr, int s, int m, int e) {
        // create the sub arrays if and when required

        // Note that in this case, when you are initializing in this way
        // this means that it contains the characters from s to m
        vector<int> L = {arr.begin() + s, arr.begin() + m + 1};
        vector<int> R = {arr.begin() + m + 1, arr.begin() + e + 1};

        int i = 0; // First Array holder
        int j = 0; // Second Array Holder
        int k = s; // current array holder

        while(i < L.size() && j < R.size()) {
            // Check if left <= Right to preserve stability first
            if(L[i] <= R[j]) {
                arr[k] = L[i++];
            } else {
                arr[k] = R[j++];
            }
            k++;
        }

        //For the extras
        while(i<L.size()) {
            arr[k++] = L[i++];
        }

        while(j<R.size()) {
            arr[k++] = R[j++];
        }
    }

    vector<int> mergersorter(vector<int>& arr, int s, int e) {
        if(e<=s) {
            return arr;
        }

        int m = (e+s)/2;

        //First Half
        mergersorter(arr, s, m);

        //Second half
        mergersorter(arr, m+1, e);

        //Merge them together
        merge(arr, s, m ,e);

        return arr;
    }

    // One function to make the sort happen
    // one function to break the array into 2 pieces

//     void merge(vector<int>& arr, int s, int m, int e) {
//     // Copy the sorted left & right halfs to temp arrays
//     vector<int> L = {arr.begin() + s, arr.begin() + m + 1};
//     vector<int> R = {arr.begin() + m + 1, arr.begin() + e + 1};

//     int i = 0; // index for L
//     int j = 0; // index for R
//     int k = s; // index for arr

//     while (i < L.size() && j < R.size()) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i++];
//         } else {
//             arr[k] = R[j++];
//         }
//         k++;
//     }

//     // One of the halfs will have elements remaining
//     while (i < L.size()) {
//         arr[k++] = L[i++];
//     }
//     while (j < R.size()) {
//         arr[k++] = R[j++];
//     }
// }
    
//     vector<int> mergeSort(vector<int>& arr, int s, int e) {
// 		// The condition below can be simplified down to e <= s right?
//     if (e - s + 1 <= 1) {
//         return arr;
//     }
//     // The middle index of the array
//     int m = (s + e)  / 2;

//     // Sort the left half
//     mergeSort(arr, s, m);

//     // Sort the right half
//     mergeSort(arr, m + 1, e);

//     // Merge sorted halfs
//     merge(arr, s, m, e);

//     return arr;
// }

    vector<int> sortArray(vector<int>& nums) {
        return mergersorter(nums, 0, nums.size()-1);
        
    }
};

using namespace std;

int main() {
    vector<int> first = {2,1,5,4,3,0};
    Solution A;
    vector<int> sol = A.sortArray(first);

    for(auto num : sol) {
        cout<< num <<endl;
    }
    return 0;
}