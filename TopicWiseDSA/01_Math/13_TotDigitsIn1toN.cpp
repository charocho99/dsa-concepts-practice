// Given a number n, count the total number of digits required to write all numbers from 1 to n.

// Examples:

// Input: n = 13
// Output: 17 
// Explanation: There are total 17 digits required to write all numbers from 1 to 13.
// Input: n = 4
// Output: 4
// Explanation: There are total 4 digits required to write all numbers from 1 to 4.
// Constraints:

// 1 ≤ n ≤ 105

#include <bits/stdc++.h>
using namespace std;

long long countTotalDigits(long long n) {
    long long numberOfDigits =0;
    for (int i = 1; i <= n; i *= 10)
        numberOfDigits += (n - i + 1);

    return numberOfDigits;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long n;
    cin >> n;
    cout << countTotalDigits(n) << "\n";
    cout << countTotalDigits(13) << "\n"; // 17
    cout << countTotalDigits(4) << "\n";  // 4
    return 0;
}