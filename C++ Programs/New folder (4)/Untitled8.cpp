#include<iostream>
using namespace std;
fact(int n)
{
int res=1;
for(int i=1;i<=n;i++)
{
    res=res*i;
}
cout<<res;
}
main()
{
int m;
cout<<"Enter Number:";
cin>>m;
fact(m);
}
