// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]
// Constraints:
// 2 <= nums.length <= 105
// -30 <= nums[i] <= 30
// The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.

#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> res (nums.size(),1);
    int prefix=1;

    for(int i = 0; i< nums.size(); i++){
        res[i] = prefix;
        prefix *= nums[i];
    }
    int postfix=1;
    for(int i=nums.size()-1; i>=0; i--){
        res[i] *= postfix;
        postfix *= nums[i];
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

    vector<int> result = productExceptSelf(nums);

    for(int i=0;i<n;i++){
        cout<< result[i]<<" ";
    }

    return 0;

}