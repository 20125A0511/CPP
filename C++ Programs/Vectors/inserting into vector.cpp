//Vectors Printing and Sorting
#include<bits/stdc++.h>
using namespace std;
main()
{
vector <int> v={99,88,77,66,55,44,33,22,11};
vector <int> :: iterator itr;
cout<<"Vector Elements:"<<endl;
for(itr=v.begin();itr!=v.end();itr++)
{
    cout<<(*itr)<<" "<<endl;
}
cout<<"------------------------------"<<endl;
sort(v.begin(),v.end());
for(itr=v.begin();itr!=v.end();itr++)
cout<<(*itr)<<endl;
}
