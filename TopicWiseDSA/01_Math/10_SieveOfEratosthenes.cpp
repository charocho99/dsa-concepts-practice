#include<bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n){
    if (n<=1) return;
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i=2; i<=n; i++){
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j=i*i; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;

    sieveOfEratosthenes(n);
    return 0;
}

// Time Complexity: O(n*log(log(n)))
// Auxiliary Space: O(n)



