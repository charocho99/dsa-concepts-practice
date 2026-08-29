// Time Complexity: O(log5n)

// Auxiliary Space: O(1)

#include<bits/stdc++.h>
using namespace std;

int findTrailingZeros(int n){
    int res = 0;
    for(int i=5; n/i >= 1; i=i*5){
        res = res + n/i;
    }
    return res;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    cout << findTrailingZeros(n) << endl;

    return 0;
}