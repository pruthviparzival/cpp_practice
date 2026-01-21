#include<bits/stdc++.h>
using namespace std;

// Left rotation by d positions - O(n) time, O(1) space
void rotateLeft(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n;  // Handle d > n
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}
// Example: arr = {1, 2, 3, 4, 5}, d = 2
// Step 0 (Initial): [1, 2, | 3, 4, 5]
// Step 1 (Reverse first 2): [2, 1, | 3, 4, 5]
// Step 2 (Reverse rest): [2, 1, | 5, 4, 3]
// Step 3 (Reverse all): [3, 4, 5, 1, 2] (Result!)

// Right rotation by d positions
void rotateRight(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
}

// Example: arr = {1, 2, 3, 4, 5}, d = 2
// Step 0 (Initial): [1, 2, 3, 4, 5]
// Step 1 (Reverse all): [5, 4, 3, 2, 1]
// Step 2 (Reverse first 2): [4, 5, | 3, 2, 1]
// Step 3 (Reverse rest): [4, 5, | 1, 2, 3] (Result!)

int main() {
    return 0;
}