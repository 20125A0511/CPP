#include<bits/stdc++.h>
using namespace std;
main()
{
string a,b,c,d,str1,str2,str3,str4;
int e,f,g,h;
cout<<"Enter String 1:";
    cin>>a;
cout<<"Enter String 2:";
    cin>>b;
    cout<<"Enter String 3:";
    cin>>c;
    cout<<"Enter String 4:";
    cin>>d;
    e=a.length();
    f=b.length();
    g=c.length();
    h=d.length();
    if(e>f&&e>g)
    {
if(e>h&&e>g)
{
if(e>h)
{

    str1=a;
}
else if(f>g&&f>h)
{
    str2=b;
}
}
else if(g>h)
{

    str3=c;
}
    }
else
{
    str4=d;
}
cout<<str1;
cout<<str2;
cout<<str3;
cout<<str4;

}


