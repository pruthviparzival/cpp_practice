#include<bits/stdc++.h>
using namespace std;

// floor -> largest no in an array <= x
// ceil -> smallest no in an array >= x

// ceil is same as lower_bound except you have to return value instead of index


// TC -> O (log n)
int get_ceil(vector<int> &arr,int x) {
    int ans = -1;
    auto it = lower_bound(arr.begin(),arr.end(),x);
    if(it != arr.end()) ans = *it;
    return ans;
}

int get_floor(vector<int> &arr,int x) {
    int ans = -1;
    int low = 0, high = arr.size() - 1;

    while(low <= high) {
        int mid = low + (high -low)/2;
        if(arr[mid] <= x) {
            ans = arr[mid];
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

// alternative for floor using upper_bound
int get_floor2 (vector<int> & arr,int x) {
    int ans = -1;
    auto it = upper_bound(arr.begin(),arr.end(),x);
    if(it != arr.end()) ans = *(--it);
    return ans;
}

int main() {
    vector<int> arr = {10,20,30,35,40,50};
    int x;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"ceil : "<<get_ceil(arr,x)<<endl;
    cout<<"floor : "<<get_floor(arr,x)<<endl;
    cout<<"floor using upper bound: "<<get_floor2(arr,x)<<endl;
    return 0;
}