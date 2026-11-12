#include<bits/stdc++.h>
using namespace std;

//better to use long long

long long iterativePower(long long x, long long n){
    long long ans =1;
    while(n>0){
        if(n&1){
            ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    }

    return ans;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long x, n;
    cin>>x>>n;

    cout<<iterativePower(x,n);

    return 0;
}

// Time Complexity: O(log n)
// Auxiliary Space: O(1)