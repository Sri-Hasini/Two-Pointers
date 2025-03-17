//Sort array by parity - codechef (easy)
//https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/DSAPROB16?tab=statement
/*
You are given an array of integers. Your task is to sort the array such that all odd numbers come before all even numbers while maintaining the original relative order of the odd and even numbers.
*/
#include <bits/stdc++.h>
using namespace std;

void sortArrayByParity(vector<int>& nums) {
    int count_odd = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] & 1) count_odd++;
    }
    vector <int> ans(nums.size());
    int left = 0, right = count_odd;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] & 1) {
            ans[left] = nums[i];
            left++;
        }
        else {
            ans[right] = nums[i];
            right++;
        }
    }
    nums = ans;
}

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    sortArrayByParity(nums);

    for (int i = 0; i < N; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
