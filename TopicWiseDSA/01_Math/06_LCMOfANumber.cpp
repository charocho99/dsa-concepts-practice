#include<bits/stdc++.h>
using namespace std;

int LCMBruteForce(int a, int b){
    int res = max(a,b);
    while(true){
        if (res%a==0 && res%b==0) return res;

        res++;
    }
    return res;
}

int LCMEuclidean(int a, int b){
    int x = a, y = b;

    while(y!= 0){
        int temp = y;
        y = x % y;
        x = temp;
    }

    int gcd = x;
    int lcm = (a*b) / gcd;

    return lcm;
}

int main (){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


	int a, b;
    cin>>a>>b;
    //cout<<"LCM of two numbers ineff "<<LCMBruteForce(a,b)<<endl;
    cout<<"LCM of two numbers in Euclidean method are "<<LCMEuclidean(a,b)<<endl;

    return 0;
}

// what if a and b both are big numbers then a*b will be a bigger number??