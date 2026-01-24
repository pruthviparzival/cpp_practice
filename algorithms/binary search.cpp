#include<bits/stdc++.h>
using namespace std;



// TC -> O(log n)
// great for array with sorted elemnets in any order
int solve(vector<int> &arr,int target) {
    int n = arr.size();
    int low = 0, high = n-1;
    int mid;
    while(low <= high) {
        mid = low + (high - low)/2;

        if(arr[mid] == target) return mid;
        else if(arr[mid] < target)  low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1,3,4,6,7,22,45,64,75,78};
    int target;
    cout<<"Enter the target to search: ";
    cin>>target;
    cout<< solve(arr,target)<<endl;
    return 0;
}