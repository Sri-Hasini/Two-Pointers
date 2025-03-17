//Remove Duplicates - codechef (900)
//https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/PREP69?tab=statement
/*
You are given an array A1,A2,…,AN of length N sorted in non-decreasing order. Your task is to remove all the duplicates and find the sorted increasing array of distinct elements consisting of all distinct elements present in A.
*/
#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(vector <int>& a, int n) {
    // We are taking left and right pointers to process this problem 
    int left = 0;
    for (int right = 1; right < n; right++) {
        if (a[right] != a[left]) {
            // If they are not equal then we can store the right value in the left+1
            left++;
            a[left] = a[right];
        }
    }
    //We are resizing the vector after the process is done, so that it only have the unique elements
    a.resize(left + 1);
    return;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        removeDuplicates(a, n);
        cout << a.size() << endl;
        for (auto i : a) cout << i << " ";
        cout << endl;
    }
}
