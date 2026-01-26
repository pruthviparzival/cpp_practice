#include<bits/stdc++.h>
using namespace std;

// this works only on sorted ranges

// Upper bound -> The SMALLEST index i such arr[i] > x , where x is input value
// TC -> O(log n)

int solve(vector<int> &arr,int x) {
    int ans = arr.size();
    int low = 0, high = arr.size() - 1;
    while(low <= high) {
        int mid = low  + (high - low)/2;
        if(arr[mid] > x){
            ans = x;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

// alternative way - using C++ STL
int solve2(vector<int> nums,int target) {
    auto it = upper_bound(nums.begin(),nums.end(),target);
    return it - nums.begin();
}

int main() {
    vector<int> arr = {1,2,3,4,6,7,7,8,9,9,11,14,24};
    int x;
    cout<< "Enter x to find its upper bound: ";
    cin>>x;
    cout<< "Upper bound is "<<solve(arr,x)<<endl;
    return 0;
}