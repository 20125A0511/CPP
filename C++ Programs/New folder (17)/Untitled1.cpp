#include<iostream>
using namespace std;
main()
{
int n,m,i,j;
cout<<"Enter Row Size: ";
cin>>n;
cout<<"Enter Column Size: ";
cin>>m;
int a[n][m];
cout<<"Enter ARRAY elements:";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        cout<<a[i]<<"\n"<<a[j];
    }
}
}
