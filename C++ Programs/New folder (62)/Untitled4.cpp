// Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order. Here are some of the frequently used member functions of sets:

// Declaration:
// set<int>s; //Creates a set of integers.

// Size:
// int length=s.size(); //Gives the size of the set.

// Insert:
// s.insert(x); //Inserts an integer x into the set s.

// Erasing an element:
// s.erase(val); //Erases an integer val from the set s.


// https://i...content-available-to-author-only...e.com/g1rLPa

#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    set<int> :: iterator it;
    // after inserting in the set
    for(it=s.begin();it!=s.end();it++)
    cout<<(*it)<<" ";
    cout<<endl;
    // after deleteing 2
    s.erase(2);
    for(it=s.begin();it!=s.end();it++)
    cout<<(*it)<<" ";
    cout<<endl;
    // length of the set;
    cout<<s.size();
}
