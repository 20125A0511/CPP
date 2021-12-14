#include<iostream>
using namespace std;
main()
{
int n;
cout<<"Enter Array Size:";
cin>>n;
int a[n],i,b[n];
cout<<"Enter Array Elements:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
if(a[i]==a[i+1])
{
b[i]=a[i]*2;
b[i+1]=0;
}
else{
    a[i]++;
}
}
for(i=0;i<n;i++)
{

    cout<<b[i];
}

}
