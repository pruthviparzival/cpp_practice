#include <bits/stdc++.h>
using namespace std;

void arrayOperations() {
    // Declaration and initialization
    vector<int> arr = {1, 2, 3, 4, 5};
    
    // Insertion at end - O(1) amortized
    arr.push_back(6);
    
    // Insertion at position - O(n)
    arr.insert(arr.begin() + 2, 10);  // Insert 10 at index 2
    
    // Deletion from end - O(1)
    arr.pop_back();
    
    // Deletion from position - O(n)
    arr.erase(arr.begin() + 2);  // Remove element at index 2
    
    // Searching - O(n)
    auto it = find(arr.begin(), arr.end(), 3);
    if(it != arr.end()) {
        cout << "Found at index: " << it - arr.begin() << endl;
    }
    
    // Accessing - O(1)
    cout << "Element at index 2: " << arr[2] << endl;
    
    // Size
    cout << "Size: " << arr.size() << endl;
    
    // Sorting - O(n log n)
    sort(arr.begin(), arr.end());
    
    // Reversing - O(n)
    reverse(arr.begin(), arr.end());
}