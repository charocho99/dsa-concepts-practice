#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1) return false;

    for (int i=2; i*i <=n; i++){
        if(n%i ==0) return false;
    }
    return true;
}

bool isPrimeEff(int n){
    if(n==1) return false;
    if (n%2==0 or n%3==0) return false;

    for(int i=5; i*i <=n; i= i+6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


	int n;
    cin>>n;
    
    //approach1
    // if(isPrime(n)) cout<<n<<" is Prime";
    // else cout<< n <<" is not a Prime";

    //approach2
    if(isPrimeEff(n)) cout<<n<<" is Prime";
    else cout<<n<<" is not a Prime";


    return 0;
}