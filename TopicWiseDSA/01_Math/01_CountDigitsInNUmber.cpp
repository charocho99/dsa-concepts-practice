// Time Complexity : O(log10(n)) or θ(num digits)
// Auxiliary Space: O(1) or constant

#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    cout << countDigits(n);
}