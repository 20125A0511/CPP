#include<bits/stdc++.h>
using namespace std;
main()
{
vector <int> v={9,8,7,6,5,4,3,2,1};
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
