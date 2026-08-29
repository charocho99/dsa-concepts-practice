#include <bits/stdc++.h>
using namespace std;

void printSquarePattern(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void printRightEqualRightTrianglePattern(int n){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void invertedPrintRightEqualRightTrianglePattern(int n){
    for (int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void pyramidStarPattern(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}

void invertedPyrammidStarPattern(int n){
    for (int i=n; i>0; i--){
        //space
        for (int j=0;j<(n-i);j++){
            cout<<" ";
        }
        //star
        for (int j=0;j<(2*i-1);j++){
            cout<<"*";
        }
        //space
        for (int j=0;j<(n-i);j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}

void sideAsymmetricTriangle(int n){
    for (int i=1; i<= (2*n -1); i++){
        if(i<=n){
            for (int j=0; j<i; j++){
                cout<<"*";
            }
        }else{
            for (int j=0; j< (2*n -i); j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void booleanRightAngledTriangle(int n){
    // for(int i=1;i<=n;i++){
    //     for(int )
    // }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        //square star pattern
        // int n;
        // cin >> n;
        // printSquarePattern(n);

        //equal side right angled triangle star pattern
        // int n;
        // cin>>n;
        // printRightEqualRightTrianglePattern(n);

        //invertedPreviousOne
        // int n;
        // cin>>n;
        // invertedPrintRightEqualRightTrianglePattern(n);

        //pyramid star pattern
        // int n;
        // cin>>n;
        // pyramidStarPattern(n);

        //invertedprevious
        // int n;
        // cin>>n;
        // invertedPyrammidStarPattern(n);

        //sideAsymmetricTriangle
        // int n;
        // cin>>n;
        // sideAsymmetricTriangle(n);

        //boolean 0 1 rightangled triangle
        int n;
        cin>>n;
        booleanRightAngledTriangle(n);


        cout <<endl;
    }

    return 0;
}