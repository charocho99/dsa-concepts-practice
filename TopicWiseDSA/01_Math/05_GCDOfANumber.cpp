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

// The time complexity for the above algorithm is O(log(min(a,b))) the derivation 
// for this is obtained from the analysis of the worst-case scenario. What we do is 
// we ask what are the 2 least numbers that take 1 step, those would be (1,1). 
// If we want to increase the number of steps to 2 while keeping the numbers as low 
// as possible as we can take the numbers to be (1,2). Similarly, for 3 steps, the 
// numbers would be (2,3), 4 would be (3,5), 5 would be (5,8). So we can notice a 
// pattern here, for the nth step the numbers would be (fib(n), fib(n+1)).  
// So the worst-case time complexity would be O(n) where a>= fib(n) and b>= fib(n+1). 

// Now Fibonacci series is an exponentially growing series where the ratio of 
// nth/(n-1)th term approaches (sqrt(5)+1)/2 which is also called the golden ratio. 
// So we can see that the time complexity of the algorithm increases linearly as the 
// terms grow exponentially hence the time complexity would be log(min(a,b)).