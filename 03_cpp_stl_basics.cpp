#include<bits/stdc++.h>
using namespace std;

void explainPair(){

    cout<<"Pair is a container that holds two values of different data types"<<endl;
    //pair
    pair <int, string> p1 = {1, "one"};
    cout << p1.first<< " "<< p1.second<<endl;

    //pair has nested properties
    pair<int, pair<int, int>> p2 = {1,{3,4}};
    cout << p2.first<< " "<< p2.second.first<< " "<< p2.second.second<<endl;

    pair <int, int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout<< arr[1].first<<endl;
    cout<<"Pair functions ends"<<endl;
}

/* explaining Vector
void explainVector(){
    cout<<"Vector is a dynamic array that can grow and shrink in size"<<endl;

    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2); //automatically understands it as a pair

    vector<int> v2(5,100); // creates a vector of size five with all elements equals to 100

    vector<int> v3(5); // vector of size 5 with all elements equals to zero

    vector<int> v4(5, 20);
    vector<int> v5(v4); //copies v4 values to v5, now v5=v4

    vector<int>::iterator it = v4.begin(); // it gives the memory address of v.begin() to access the element in the memory use *.
    it++;
    cout << *(it) << " ";
    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v4.end(); //points to the mem location after the last element
    vector<int>::reverse_iterator it = v4.rend(); //location before first element
    vector<int>::reverse_iterator it = v4.rbegin(); //location of the last element

    cout<< v1[0] <<" "<< v1.at(0); //both are same
    cout<< v1.back() << " "; // the last element

    //printing a vector
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *(it) << " ";
    }
    cout<<endl;
    for(auto it = v1.begin(); it != v1.end(); it++){
        cout << *(it) << " ";
    }
    cout<<endl;
    for(auto it : v1){
        cout << it << " ";
    }
     
    vector<int> v;

    //erasing a vector
    // {10, 20, 12, 23}
    v.erase(v.begin()+1); //deletes 20
    //{10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4); // {10, 20, 35}

    //Insert Function
    vector<int>v(2, 100); // {100, 100}
    v.insert(v.begin(),300); // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10); // {300, 10, 10, 100, 100}
    //copying of a vector
    vector<int> copy(2,50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10,20}
    cout << v.size(); // 2

    // {10,20}
    v.pop_back(); // {10}

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); //v1 -> {30,40} and v2 -> {10,20}

    v.clear(); // erases the entire vector

    cout << v.empty(); //boolean value to check if the vector is empty

}

*/

void explainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); // {0, 5, 2, 4}

    ls.emplace_front(8); // {8 0 5 2 4}
    
    for(auto it: ls){
        cout<<it<<" ";
    }
}

void explainDeque() {
    deque<int>dq;

    //functions same as vector and lists
}

void explainStack() {
    stack<int> st;
    // stack is LIFO = Last In First Out
    // all the stack operations are O(1) operations; everything happens in constant time.

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2 1}
    st.push(3); // {3 2 1}
    st.push(3); // {3 3 2 1}
    st.emplace(5); // {5 3 3 2 1}

    cout << st.top(); // 5
    st.pop(); // st looks like {3 3 2 1}

    cout<< st.top(); // 3
    cout<< st.size(); // 4

    cout<< st.empty();

    stack <int> st1, st2;
    st1.swap(st2);

}

void explainQueue() {
    // queue is FIO -> First In First Out
    // All the operation as O(1)
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5;
    cout << q.back(); //prints 9

    // Q is {1,2,9}
    cout << q.front(); // print 1

    q.pop(); // {2,9}

    cout << q.front(); // prints 2

    //size swap empty same as stack
}

void explainPriorityQueue(){
    // the guy with the largest value stays at the top
    // push -> logn
    // top -> O(1)
    // pop -> logn
    
    priority_queue<int> max_pq; // max heap

    max_pq.push(5); // {5}
    max_pq.push(2); // {5 2}
    max_pq.push(8); // {8 5 2}
    max_pq.emplace(10); // {10 8 5 2}

    cout << max_pq.top(); // prints 10

    max_pq.pop(); // {8, 5, 2}

    cout << max_pq.top(); // prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5); // {5}
    min_pq.push(2); // {2 5}
    min_pq.push(8); // {2 5 8}
    min_pq.emplace(10); // {2 5 8 10}

    cout << min_pq.top(); // prints 2
}

void explainSets(){
    set<int> st; // stores in sorted order and unique values
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vecctor
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // points to the element 3, an iterator to that position
    auto it2 = st.find(6); // returns st.end(), points to the end of the set, as 6 is not present

    // {1, 4, 5}
    st.erase(it); // removes the element at position it takes logn time, as it has to find the element first, if it doesn't find it, it returns st.end()    
    st.erase(4); // removes the element with value 4 takes logn time, as it has to find the element first
    int cnt = st.count(1); // returns 1 if present else 0, takes logn time

    // {1,2,3,4,5}
    auto it3 = st.find(2);
    auto it4 = st.find(4);
    st.erase(it3, it4); // removes all the elements in the range [it3, it4), takes logn time for each element to be removed {1, 4, 5}

    // lower_bound() and upper_bound() work similarly to those in other containers, if the element is not present, it returns the next greater element's iterator or st.end() if no such element is present
    auto lower = st.lower_bound(3); // points to the first element >= 3
    auto upper = st.upper_bound(3); // points to the first element > 3



}

void explainMultiSets(){
    multiset<int> ms; // stores in sorted order and allows duplicate values
    ms.insert(1); // {1}
    ms.emplace(2); // {1, 2}
    ms.insert(2); // {1, 2, 2}
    ms.insert(4); // {1, 2, 2, 4}
    ms.insert(3); // {1, 2, 2, 3, 4}

    auto it = ms.find(2); // points to the first occurrence of the element 2
    ms.erase(it); // removes the first occurrence of the element 2
    ms.erase(2); // removes all the occurrences of the element 2

    int cnt = ms.count(2); // returns the number of occurrences of the element 2

    auto lower = ms.lower_bound(3); // points to the first element >= 3
    auto upper = ms.upper_bound(3); // points to the first element > 3
}

void explainUnorderedSets(){
    unordered_set<int> st; // stores in random order and unique values
    // lower_bound() and upper_bound() functions are not present in unordered_set, as it is not sorted. 
    // All other functions are same as those of set.
    // it doesn not store in any particular order, it has a better time complexity
    // than set in most of the cases, except some when collision happens

    // in most of the cases, it has O(1) time complexity for insert, erase and find operations, but in worst case it can be O(n)
}

void explainMap() {
    map<int, int> mp; // stores in sorted order and unique keys

    map<int, pair<int, int>> mp1; // stores in sorted order and unique keys, values are pairs

    map<pair<int, int>, int> mp2; // stores in sorted order and unique keys, keys are pairs

    mp[1] = 2; // {1, 2}
    mp.emplace(3, 1); // {1, 2}, {3, 1}
    mp.insert({2, 4}); // {1, 2}, {2, 4}, {3, 1}
    mp2[{2, 3}] = 10; // {{2, 3}, 10}

    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    // map stores in sorted order of keys, and unique keys, if we try to insert a key that is already present, it will not insert it again, but will update the value of that key.
    cout<<mp[5]<<endl; // returns 0, as 5 is not present in the map, but it creates a new entry with key 5 and value 0
    auto it = mp.find(3); // points to the element with key 3, an iterator to that position
    cout<<it->second<<endl; // prints the value of the key 3, which is 1

    auto it2 = mp.find(6); // returns mp.end(), points to the end of the map, as 6 is not present

    auto it3 = mp.lower_bound(2); // points to the first element with key >= 2
    auto it4 = mp.upper_bound(2); // points to the first element with key > 2

    // erase, size, swap, empty functions are same as those of set
}

void explainMultiMap() {
    //everything same as map, but allows duplicate keys
    //sorted order of keys is maintained, but duplicate keys are allowed

}

void explainUnorderedMap() {
    //everything same as map, but does not maintain sorted order of keys
    //allows duplicate keys, but does not maintain sorted order of keys
    //in most of the cases, it has O(1) time complexity for insert, erase and find operations, 
    //but in worst case it can be O(n)
}

void explainExtras(){
    int n;
    int a[n] ;
    sort(a, a+n); // to sort the array completely
    vector <int> v;
    sort(v.begin(), v.end()); // to sort a vector
    sort(a+2, a+4); // to sort a part of the array, starting index, (ending  index +1)

    // to sort in descending order
    sort(a, a+n, greater<int>());

    // to sort in customizes complex logic like-
    // sort it according to second element
    // if the second element is same, then sort
    // it according to first element but in descending
    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
    sort(a, a+n, comp); //comp is a self-written comparator function which return boolean value

    // to check the number of set bits (1) in a number

    int num = 7;
    int cnt = __builtin_popcount(num); // returns 3 for 111, time - O(b), where b is the number of bits

    long long num2;
    int cnt2 = __builtin_popcountll(num2); // for long long numbers

    string s = "123";
    
    //prints all the permutations
    do{
        cout << s << endl;
    } while(next_permutation(s.begin(),s.end()));

    //but if s1="321", to print all the permutations, first sort it
    string s2 = "321";
    sort(s2.begin(),s2.end());
    do{
        cout << s2 << endl;
    } while(next_permutation(s2.begin(),s2.end()));

    // to find the max element/ it's address use max_element() function
    int maxi = *max_element(a, a+n);
}

bool comp (pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // when p1.second==p2.second
    if(p1.first > p1.second) return true;
    return false;
    // above we wrote all the 
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    return 0;
}