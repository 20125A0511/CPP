#include<iostream>
using namespace std;
perfect(int num)
{
int i,rem,sum=0;
for(i=1;i<=(num-1);i++)
{
rem=num%i;
if(rem==0)
{
sum=sum+i;
    }
}
if(sum==num)
{
    cout<<num<<"is Perfect number";
}
else
{

cout<<num<<"is not an perfect number";
}
}
main()
{
    int n;
cout<<"Enter number:";
cin>>n;
perfect(n);
}
