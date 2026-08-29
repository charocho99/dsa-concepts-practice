#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    cout<<"Binary representation of "<<n<<" is ";
    for(int i=31;i>=0;i--)
    {
        cout<<((n>>i)&1);
    }
    return 0;
}