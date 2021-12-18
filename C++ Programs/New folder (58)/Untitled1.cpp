// Replace each array element by its corresponding rank

// Given an array of distinct integers, replace each array element by its corresponding rank in the array.
// The minimum array element has the rank 1; the second minimum element has a rank of 2, and so on…

// For example,

// Input:  { 10, 8, 15, 12, 6, 20, 1 }

// Output: { 4, 3, 6, 5, 2, 7, 1 }


// https://i...content-available-to-author-only...e.com/pOa7bT

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    map<int,int>rank;
    int arr[n],copy[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        copy[i]=arr[i];
    }
    sort(copy,copy+n);
    for(int i=0;i<n;i++)
    rank[copy[i]]=i+1;
    for(int i=0;i<n;i++)
    cout<<rank[arr[i]]<<" ";
}
