#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int target,int low,int high) {
    if(low > high) return -1;

    int mid = low + (high-low)/2;

    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) return solve(arr,target,mid+1,high);
    else return solve(arr,target,low,mid-1);
}

int main() {
    vector<int> arr = {1,2,3,5,7,11,23,33,35,65};
    int target;
    cout<< "Enter the target :";
    cin>>target;
    int low = 0, high = arr.size() - 1;
    cout << solve(arr,target,low,high);
    return 0;
}