// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]

// Constraints:
// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
 
// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumOnePass(vector<int>& nums, int target) {
    unordered_map <int, int> prevMap;
    for(int i=0; i< nums.size(); i++){
        int diff = target - nums[i];
    if(prevMap.find(diff)!= prevMap.end()){
            return {prevMap[diff],i};
        }
        prevMap.insert({nums[i], i});
    }
    return {};
}

int main () {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> nums;
    int n, target;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;
    vector<int> result = twoSumOnePass(nums, target);
    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}