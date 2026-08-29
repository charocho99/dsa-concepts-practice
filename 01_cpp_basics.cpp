#include<bits/stdc++.h>
using namespace std;

void printName() {
    cout << "Hi\n";
}

void printName(int nm1,int nm2) {
    cout << "Hi "<<nm1<<" "<<nm2;
}

int sum(int x, int y){
    cout<<"\nn"<<(x+y)<<"\n";
    return (x+y);
}

int maxx(int x, int y){
    if(x>=y) return x;
    else return y;
}

int doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    return num;
}

void doSomethingwithReference(int &num){
    cout<<num<<endl;
    num+=5;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // int x, y;
    // cin >> x >> y;
    // cout << "Hello World \n" << x << "\n" << y << "\n";

    //string and getline
    // string str;
    // getline(cin, str);
    // cout << str;

    // character - for single character input
    // char ch;
    // cin >> ch;
    // cout << ch;

    //conditionals

    // int age;
    // cin >> age;

    // if(age>18) {
    //     cout << "you are an adult \n";
    // }
    // else if(age>=13){
    //     cout << "teen";
    // } else{
    //     cout << "You are not an adult!";
    // }

    // int age;
    // cin >>age;
    // if(age < 18) {
    //     cout << "not eligible for job";
    // }
    // else if(age<=57) {
    //     cout << "eligible for job";
    //     if(age >= 55) {
    //         cout << ", but retirement soon";
    //     }
    // }
    // else {
    //     cout << "retirement time";
    // }

    // int day;
    // cin >> day;

    // switch(day) {
    //     case 1:
    //         cout << "Mon";
    //         break;
    //     case 2:
    //         cout << "Tue";
    //         break;
    //     case 3:
    //         cout << "Wed";
    //         break;
    //     case 4:
    //         cout << "Thu";
    //         break;
    //     case 5:
    //         cout << "Fri";
    //         break;
    //     case 6:
    //         cout << "Sat";
    //         break;
    //     case 7:
    //         cout << "Sun";
    //         break;
    //     default:
    //         cout << "Invalid";
    // }

    //arrays
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << '\n';
    // arr[0] += 10;
    // arr[1] = arr[0];
    // cout << arr[0] << arr[1];

    //2D array
    // int arr[3][5];
    // arr[1][3]=78;
    // cout << arr[1][3];

    // size() to know the length of the string

    // for loop
    // int i;
    // cin >> i;
    // for (int i=5; i>0; i-=1){
    //     cout << "ch \n";
    // } 
    // cout <<i;

    //while loop
    // int i =5;
    // while(i>=1){
    //     cout <<"ch"<<i<<endl;
    //     i = i-1;
    // }

    //do while
    // int i=1,x;
    // cin >>x;
    // do {
    //     cout << "ch "<<i<<" "<<x<<endl;
    //     i=i+1;
    // }while(i<=x);
    // //when x = 0 > outputs -> ch 1 0

    //function
    // int x,y;
    // cin>>x>>y;
    // printName();
    // printName(0,1);
    // sum(x,y);
    // cout<<"max num is"<<maxx(x,y)<<endl;

    //pass by value
    // int num = 10;
    // doSomething(num);
    // cout<<"main function "<<  num << endl;

    //pass by reference
    // int num = 10;
    // doSomethingwithReference(num);
    // cout<<"main function "<<  num << endl;

    // arrays with for loops
    // int arr[5];
    // for(int i=0; i<=4; i+=1){
        
    //     cin >> arr[i];
    //     cout << arr[i] << endl;
    // }

    return 0;
}