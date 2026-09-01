#include<bits/stdc++.h>
using namespace std;

void printAllDivisors(int n) {
    // prints the divisors in sorted order.
    int i;
    for (i=1; i*i<n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    if(i - (n/i) == 1){
        i--;
    }

    for(; i>=1; i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    cout<<"The divisors of "<<n<<" are ";
    printAllDivisors(n);

    return 0;
}

// time - sqrt(n)