// Given an integer array nums, find a subarray that has the largest product, and return the product.
// The test cases are generated so that the answer will fit in a 32-bit integer.
// Note that the product of an array with a single element is the value of that element.

// Example 1:
// Input: nums = [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.

// Example 2:
// Input: nums = [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

// Constraints:
// 1 <= nums.length <= 2 * 104
// -10 <= nums[i] <= 10

#include<bits/stdc++.h>
using namespace std;

// Approach 1: Dynamic Programming : Kadane's Algorithm
int maxProductSubArr(vector<int>& nums){
    int res = nums[0];
    int curMin = 1, curMax = 1;

    for (int num : nums) {
        int tmp = curMax * num;
        curMax = max(max(num * curMax, num * curMin), num);
        curMin = min(min(tmp, num * curMin), num);
        res = max(res, curMax);
    }
    return res;
}

// Approach 2: Prefix and Suffix Product
int maxProduct(vector<int>& nums) {
    int n = nums.size(), res = nums[0];
    int prefix = 0, suffix = 0;

    for (int i = 0; i < n; i++) {
        prefix = nums[i] * (prefix == 0 ? 1 : prefix);
        suffix = nums[n - 1 - i] * (suffix == 0 ? 1 : suffix);
        res = max(res, max(prefix, suffix));
    }
    return res;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    cout<<maxProductSubArr(nums)<<endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)