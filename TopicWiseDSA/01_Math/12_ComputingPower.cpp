#include <bits/stdc++.h>
using namespace std;

 int power(int x, int n)
{
	if(n == 0)
		return 1;

	int temp = power(x, n/2);

	temp = temp * temp;

	if(n % 2 == 0)
		return temp;
	else
		return temp * x; 
}
int main() {
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int x, n;
    cin>>x>>n;

	cout<<power(x, n);
}

// The problem can be recursively defined by:

// power(x, n) = power(x, n / 2) * power(x, n / 2);        // if n is even

// power(x, n) = x * power(x, n / 2) * power(x, n / 2);    // if n is odd

// Time Complexity: Theta(logn)

// Auxiliary Space: Theta(logn) // Since uses recursion and height of tree goes upto logn height

