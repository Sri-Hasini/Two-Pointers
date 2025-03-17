//CoronaVirus spread - codechef (1219)
//https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/COVID19?tab=statement
/*
There are N people on a street (numbered 1 through N). For simplicity, we'll view them as points on a line. For each valid i, the position of the i-th person is Xi.
It turns out that exactly one of these people is infected with the virus COVID-19, but we do not know which one. The virus will spread from an infected person to a non-infected person whenever the distance between them is at most 2.
If we wait long enough, a specific set of people (depending on the person that was infected initially) will become infected; let's call the size of this set the final number of infected people.
Your task is to find the smallest and largest value of the final number of infected people, i.e. this number in the best and in the worst possible scenario.
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
        for (int i = 0; i < n; i++) cin >> a[i];
        int mini = INT_MAX, maxi = 1, cnt = 1;
        for (int i = 0; i < n - 1; i++) {
            if (abs(a[i] - a[i + 1]) <= 2) {
                cnt++;
            }
            else {
                if (maxi < cnt) maxi = cnt;
                if (mini > cnt) mini = cnt;
                cnt = 1;
            }
        }
        if (maxi < cnt) maxi = cnt;
        if (mini > cnt) mini = cnt;
        cout << mini << " " << maxi << endl;
    }
}
