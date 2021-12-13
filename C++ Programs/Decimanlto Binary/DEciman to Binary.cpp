#include<iostream>
using namespace std;
main()
{
int n,i=0,r[20],j;
cout<< "Enter Integer to find the equivalent Binary Code:";
cin>> n;
while(n>0)
{
r[i] = n%2;
n = n/2;
i++;
}
for(j=i-1;j>=0;j--)
{
cout<< r[j];
}
}
