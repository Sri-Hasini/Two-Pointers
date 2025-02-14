//Great run - codechef (1097)
//https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/PROC18A
/*
Vishal loves running. He often visits his favourite Nehru Park and runs for very long distances. On one such visit he found that the number of girls in the park was unusually high. Now he wants to use this as an opportunity to impress a large number of girls with his awesome speed.
The track on which he runs is an N kilometres long straight path. There are ai girls standing within the ith kilometre of this path. A girl will be impressed only if Vishal is running at his maximum speed when he passes by her. But he can run at his best speed only for a single continuous stretch of 
K kilometres. Now Vishal wants to know what is the maximum number of girls that he can impress.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int maxi = 0, cur = 0;
        for (int i = 0; i < k; i++) {
            cur += a[i];
        }
        maxi = cur;
        for (int i = k; i < n; i++) {
            cur += a[i] - a[i - k];
            if (maxi < cur) maxi = cur;
        }
        cout << maxi << endl;
    }
}
