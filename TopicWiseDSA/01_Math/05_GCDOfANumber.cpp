// C++ program to find GCD of two numbers

// Time Complexity: O(log(min(a,b))|
// Auxiliary Space: O(log(min(a,b))

#include<bits/stdc++.h>
using namespace std;
// Recursive function to return gcd of a and b in single line
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);	
}

// Driver program to test above function
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


	int a, b;
    cin>>a>>b;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
	return 0;
}