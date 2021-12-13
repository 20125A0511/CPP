#include<iostream>
using namespace std;
int main()
{
int n,i,mx=0,b=0,c=0;
cout<<"Enter Size for an Array:";
cin>>n;
int arr[n];
cout<<"Enter Elements into Array";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{

    if(mx<arr[i])
    {

        mx=arr[i];
    }
}
for(i=0;i<n;i++)
{
if(b<arr[i]&&a!=arr[i])
    {
        b=arr[i];
    }
}
for(i=0;i<n;i++)
{
if(c<arr[i] && a!=arr[i] && b!=arr[i])
    {
        c=arr[i];

    }

}
cout<<arr[i];
}
