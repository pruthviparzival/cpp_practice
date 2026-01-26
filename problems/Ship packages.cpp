#include<bits/stdc++.h>
using namespace std;
// An array weights[] where weights[i] is the weight of the i-th package
// An integer D representing number of days

// Rules:
// Packages must be shipped in order
// Each day, you load contiguous packages
// The total weight shipped in a day cannot exceed ship capacity

// Goal:
// Find the minimum ship capacity needed to ship all packages within D days.

// example imput, 
// weights = [1,2,3,4,5,6,7,8,9,10]
// D = 5

bool isPossible(vector<int>& weights,long long capacity,int D) {
    int currentLoad = 0, daysUsed = 1;
    for(int w : weights) {
        currentLoad += w;

        if(currentLoad > capacity) {
            daysUsed++;
            if(daysUsed > D) return false;
            currentLoad = w;
        }
    }
    return true;
}

int shipWithinDays(vector<int>& weights, int D) {

    long long maxWeight = INT_MIN, totalWeight = 0;
    for(int w : weights) {
        maxWeight = max(maxWeight,(long long)w);
        totalWeight += w;
    }

    long long low = maxWeight, high = totalWeight;
    long long ans = -1;

    while(low <= high) {
        long long mid = low + (high - low)/2;
        
        if(isPossible(weights,mid,D)) {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

int main () {
    vector<int> weights = {1,2,3,4,5,6,7};
    int D = 4;
    cout << "Solution : "<< shipWithinDays(weights,D) << endl;
    return 0;
}