// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// Example 1:
// Input: nums = [1,2,3,1]
// Output: true
// Explanation:
// The element 1 occurs at the indices 0 and 3.
// Example 2:
// Input: nums = [1,2,3,4]
// Output: false
// Explanation:
// All elements are distinct.
// Example 3:
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

// Constraints:
// 1 <= nums.length <= 105
// -109 <= nums[i] <= 109

#include<bits/stdc++.h>
using namespace std;

bool hasDuplicate(vector<int>& arr){
    return unordered_set<int>(arr.begin(), arr.end()).size() < arr.size();
}

bool hasDuplicate2(vector<int>& arr){
    unordered_set<int> seen;
    for (int num : arr) {
        if (seen.count(num)) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<hasDuplicate(arr)<<endl;
}

// Time complexity: O(n)
// Space complexity: O(n)