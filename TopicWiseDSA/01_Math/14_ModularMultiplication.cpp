// Given three integers a, b, and M, perform modular multiplication and return (a × b) % M, where % denotes the modulo operation.

// Examples:

// Input: a = 5, b = 3, M = 11
// Output: 4
// Explanation: a × b = 5 × 3 = 15, 15 % 11 = 4, so the result is 4.
// Input: a = 12, b = 15, M = 7
// Output: 5
// Explanation: a × b = 12 × 15 = 180, 180 % 7 = 5, so the result is 5.

#include<bits/stdc++.h>
using namespace std;

long long modularMultiplication(long long a, long long b, long long M){
    long long result= 0;
    a%= M;
    while (b > 0) {
        if (b & 1) {
            result= (result + a) % M;
        }
        a= (a * 2) % M;
        b>>= 1;
    }
    return result;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long a, b, M;
    cin >> a >> b >> M;

    cout << modularMultiplication(a, b, M);

    return 0;
}
