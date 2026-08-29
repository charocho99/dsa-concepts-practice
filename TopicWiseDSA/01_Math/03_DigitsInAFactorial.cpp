// Given an integer n, find the number of digits in the value of n factorial. 

// Examples :

// Input: n = 5
// Output: 3
// Explanation: Factorial of 5 is 120. Number of digits in 120 is 3 (1, 2, and 0)
// Input: n = 120
// Output: 199
// Explanation: The number of digits in 120! is 199
// Constraints:
// 1 ≤ n ≤ 105
#include <bits/stdc++.h>
#include <numbers>
#include <cmath>
using namespace std;

int digitsInFactorial(int n)
{
    if (n < 0){
        return 0;
    }
    if (n <= 1){
        return 1;
    }
    

    #ifdef M_PI
        double pi = M_PI;
        double e  = M_E;
    #else
        double pi = acos(-1.0);
        double e  = exp(1.0);
    #endif

    double x = (n * log10(n / e) + log10(2 * pi * n) / 2.0);
    return floor(x) + 1;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    cout << digitsInFactorial(n) << endl;

    return 0;
}