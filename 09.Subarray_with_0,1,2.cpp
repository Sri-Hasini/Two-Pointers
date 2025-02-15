//Subarray with 0, 1, 2 - codechef (easy)
//https://www.codechef.com/practice/course/two-pointers/POINTERP/problems/DSCPPAS275?tab=statement
/*
You are given an array arr consisting of only the integers 0, 1, and 2. Your task is to find the number of contiguous subarrays that contain at least one occurrence of each integer (0, 1, and 2).

Input Format:
The first line contains one integer n, the size of the array. - Next line contains n integers arr[0],arr[1]...arr[n], representing the elements of the array.

Output Format:
Print the count of all subarrays that contains at least one occurrence of each integer (0,1,2).

Constraints :
1≤n≤10^5
0≤arr[i]≤2

Sample 1:
Input:
4
0 1 2 0
Output:
3
Explanation:
The subarrays are: [0, 1, 2], [0, 1, 2, 0], [1, 2, 0] Each subarray contains at least one 0, 1, 2.

Sample 2:
Input:
4
1 2 1 2 
Output:
0
Explanation:
There is no subarray such that each contains all three elements. so the answer is 0.
*/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long countSubarrays(vector<long long>& arr) {
    int count[3] = { 0, 0, 0};
    long long left = 0, cnt = 0;
    for (long long right = 0; right < arr.size(); right++) {
        count[arr[right]]++;
        while (min(count[0], min(count[1], count[2])) != 0) {
            cnt += arr.size() - right;
            count[arr[left]]--;
            left++;
        }
    }
    return cnt;
}

int main() {
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << countSubarrays(arr) << endl;

    return 0;
}
