#include<bits/stdc++.h>
using namespace std;
main()
{
string a,b,c;
string d,e;
int length;
cout<<"Enter String:";
cin>>a;
length=a.length();
for (int i = 0; i < length; i++)
{
    char c = a[i];
if (islower(c))
{

b[i]=a[i];
}
else if(isupper(c))
{

    d[i]=a[i];
}
}
for(int p=0;p<length;p++)
{
    e[p]=b[p]+d[p];
}
for(int p=0;p<length;p++)
{
    cout<<e[p];
}
}

