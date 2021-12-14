#include<iostream>
using namespace std;
prime(int n)
{
int i=1,n;
for(i=1;i<n;i++)
{
if(n%i==0)
{
cout<<i;
}
}
}
int main()
{
int left,right,pn,i,n;
cout<<"Enter Left Element:";
cin>>left;
cout<<"Enter right Element:";
cin>>right;
for(i=left;i<=right;i++)
{
prime(n);
}
}


