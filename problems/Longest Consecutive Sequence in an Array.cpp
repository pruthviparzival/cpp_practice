// Example 1:
// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

// Example 2:
// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9

// Example 3:
// Input: nums = [1,0,1,2]
// Output: 3

#include<bits/stdc++.h>
using namespace std;


// TC -> O(nlogn) , SC -> O(1)
// int longestConsecutive(vector<int> &arr){
//     sort(arr.begin(),arr.end());
//     int count = 0,res = 0;
//     for(int i=1;i<arr.size();i++) {
//         if(arr[i] == arr[i-1] + 1) count++;
//         else count = 0;
//         res = max(res,count);
//     }
//     return res+1;
// }

int main() {
    vector<int> arr = {1,2,4,5,6,10,11,13,14,15,16,17,18};
    // int res = longestConsecutive(arr);
    // cout<<"Output : "<<res<<"\n";
    return 0;
}