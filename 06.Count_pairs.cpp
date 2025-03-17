//Count pairs - codechef (easy)
//https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/DSAPROB15?tab=statement
/*
Given a sorted array of integers and a value x, count the number of pairs (i,j) such that i<j and the sum of arr[i] + arr[j] is less than x.
*/
#include <bits/stdc++.h>
using namespace std;

long long countPairsLessThanX(vector<int>& arr, int x) {
    long long left = 0, right = arr.size() - 1, cnt = 0;
    while (left < right) {
        if (arr[left] + arr[right] < x) {
            cnt += (right - left);
            left++;
        }
        else right--;
    }
    return cnt;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << countPairsLessThanX(arr, x) << endl;
    return 0;
}
