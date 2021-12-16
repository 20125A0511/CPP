//Array and Pointers
#include<bits/stdc++.h>
using namespace std;
int pointer()
{
int *ptr;
int n,i;
cout<<"Enter Array Size:"<<endl;
cin>>n;
int a[n];
ptr=a;
cout<<"Enter Array Elements:"<<endl;
for(i=0;i<n;i++)
{

    cin>>a[i];
}
for(i=0;i<n;i++)
{

    cout<<ptr[i]<<" ";
}
}
main()
{
pointer();

}
