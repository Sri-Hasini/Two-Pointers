//Maximum Common Elements - codechef (1100)
//https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/PREP17
/*
Given two arrays A and B, each of size N, where each array consists of distinct elements.
Find the number of elements that are common in both the arrays.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the size of both the arrays.
The second line contains N space separated integers - the elements of array A.
The third line contains N space separated integers - the elements of array B.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        vector <int> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0, j = 0, cnt = 0;
        while (i < n && j < n) {
            if (a[i] == b[j]) {
                cnt++;
                i++;
                j++;
            }
            else if (a[i] != b[j]) i++;
        }
        cout << cnt << endl;
    }
}
