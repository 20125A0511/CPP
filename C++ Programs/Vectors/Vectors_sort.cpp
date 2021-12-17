// You are given  integers. Sort the  integers and print the sorted order.Store the  integers in a vector. Vectors are sequence containers representing arrays that can change in size.

//  Declaration:
// vector<int>v; (creates an empty vector of integers)
//  Size:
// int size=v.size();
//  Pushing an integer into a vector:
// v.push_back(x);(where x is an integer.The size increases by 1 after this.)
//  Popping the last element from the vector:
// v.pop_back(); (After this the size decreases by 1)
//  Sorting a vector:
// sort(v.begin(),v.end()); (Will sort all the elements in the vector)
// To know more about vectors,




#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v={1,6,113,4,5};
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<(*it)<<" ";
    cout<<endl;
    // doing push_back operation
    v.push_back(5);
    v.push_back(6);
    cout<<"after push_back operation\n";
    for(it=v.begin();it!=v.end();it++)
    cout<<(*it)<<" ";
    cout<<endl;
    v.pop_back();
    v.pop_back();
    // doing pop_back operation
    cout<<"after pop_back operation\n";
    for(it=v.begin();it!=v.end();it++)
    cout<<(*it)<<" ";
    cout<<endl;
    // performing sorting
    sort(v.begin(),v.end());
    cout<<"after sorting\n";
    for(it=v.begin();it!=v.end();it++)
    cout<<(*it)<<" ";
}
