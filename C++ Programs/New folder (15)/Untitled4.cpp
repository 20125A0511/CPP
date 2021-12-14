#include<iostream>
using namespace std;
main()
{
int n,i;
cout<<"Enter Array Size:";
cin>>n;
int a[n],sum,q,b[n];
cout<<"Enter Array elements:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter Sum value:";
cin>>sum;
for(i=0;i<n;i++)
{
sum=sum-a[i];
for(q=0;q<n;q++)
{
a[i]=b[q];
}
if(sum==0){
cout<<"Sum of numbers between \n"<<q<<"and \n"<<i<<"\n is equal to sum value";
break;
}
continue;
}
}
