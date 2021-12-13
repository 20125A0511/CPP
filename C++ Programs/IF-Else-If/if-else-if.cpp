#include<iostream>
using namespace std;
main()
{
    int n,flag;
    cout<<"Enter Integer:";
    cin>>n;
    if(n%11==0)
    {
flag=11;
    }
else if(n%2==0)
        {

flag=2;
        }
else if(n%3==0)
        {
flag=3;
        }
else
{
    cout<<"Not divisble by 11 or 2 or 3";
}
switch(flag)
{
case 11:
     cout<<"Divisible by 11";
     break;
case 3:
     cout<<"Divisible by 3";
     break;
case 2:
    cout<<"Divisible by 2";
    break;
}
}
