#include<iostream>
using namespace std;
amstrong(int n)
{
int temp;
n=temp;
int sum,i,r;
while(n>0)
{
r=n%10;
i=i+(n*n*n);
n=n/10;
}
if(i==temp)
{
    cout<<"Number is Armstrong;";
}
else
{

    cout<<"Number is not Armstrong";}
}
main()
{
int n;
cout<<"Enter Digit:";
cin>>n;
amstrong(n);
}
