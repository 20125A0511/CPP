#include<iostream>
#include<math.h>
using namespace std;
main()
{
int n,i,temp;
cout<<"Enter Size of array:";
cin>>n;
int arr[n];
cout<<"Enter ArrAY elements:";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{

cout<<max(arr[i],arr[i+1]);
    }
}
}
