//167. Two Sum II - Input Array Is Sorted - leetcode (medium) (acc : 62%)
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, 
find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0, right = n - 1;
        vector <int> v;
        while (left < right) {
            int sum = (numbers[left] + numbers[right]);
            if (sum == target) {
                v.push_back(left + 1);
                v.push_back(right + 1);
                break;
            }
            else if (sum < target) {
                left++;
            }
            else right--;
        }
        return v;
    }
};
