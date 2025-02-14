//Difference Pairs - codechef (1000)
//https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/PREP68?tab=statement
/*
Given an array A of N integers and an integer B.
Find whether there exists a pair of indices (i,j) (1≤i<j≤N) such that abs(Ai−Aj)=B.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers N and B.
The next line contains N space-separated integers representing array A.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, b, cnt = 0;
        cin >> n >> b;
        vector <int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        //it is efficient to sortm in order to check in O(n) using two pointers
        int left = 0, right = 0;
        while (left < n && right < n) {
            int diff = abs(a[left] - a[right]);
            if (diff == b) {// If we found one, we can break
                cnt = 1;
                break;
            }
            else if (diff < b) {// If our diff is less than b, we need to increment right, inorder to increase the diff
                right++;
            }
            else {// If our diff is greater than b, we need to increment left, inorder to decrease the diff
                left++;
            }
        }
        cout << cnt << endl;
    }
}
