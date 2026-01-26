#include<bits/stdc++.h>
using namespace std;

// this works only on sorted ranges

// Lower bound -> The SMALLEST index i such arr[i] >= x , where x is input value
// TC -> O(log n)
int solve(vector<int>& arr,int x) {
    int ans = arr.size();
    int low = 0,high = arr.size()-1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

// alternative way - using C++ STL
int solve2(vector<int> nums,int target) {
    auto it = lower_bound(nums.begin(),nums.end(),target);
    return it - nums.begin();
}


int main() {
    vector<int> arr = {1,3,5,7,12,13,15,22,22,22,32,41,56,59};
    int x;
    cout<<"Enter the value to get its lower bound :";
    cin>>x;
    cout<<"Lower bound : "<<solve(arr,x)<<endl;
    return 0;
}