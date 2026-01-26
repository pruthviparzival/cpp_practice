#include<bits/stdc++.h>
using namespace std;

// feasibilty check
bool isPossible(vector<int>& books,long long maxPagesAllowed, int k) {
    int pagesAllocated = 0, studentsUsed = 1;
    for(int pages: books) {
        pagesAllocated += pages;

        if(pagesAllocated > maxPagesAllowed) {
            studentsUsed++;
            if(studentsUsed > k) return false;
            pagesAllocated = pages;
        }
    }
    return true;
}

// finding minimum capacity
int allocateBooks(vector<int>& books,int k) {

    // finding search space
    long long maxPages = INT_MIN;
    long long sumPages = 0;
    for(int i=0;i<books.size();i++){
        sumPages += books[i];
        maxPages = max(maxPages,(long long)books[i]);
    }

    long long low, high, mid;   // handle overflow
    low = maxPages, high = sumPages;

    // finding minimum possible solution
    long long ans = -1;
    while(low <= high) {
        mid = low + (high - low)/2;
        if(isPossible(books,mid,k)) {
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}

int main() {
    vector<int> books = {12,34,67,90};
    int k = 2;
    cout<< "Output : "<< allocateBooks(books,k) << endl;
    return 0;
}