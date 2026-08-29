#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    int rev=0;
    int temp =n;
    while(temp>0){
        rev= rev*10 + (temp%10);
        temp/=10;
    }
    return rev==n;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    if (isPalindrome(n)){
        cout<<n<<" is a Palindrome";
    }else{
        cout<< "Not a Palindrome";
    }
    return 0;
}