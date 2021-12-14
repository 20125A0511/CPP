#include<iostream>
#include<algorithm>
using namespace std;
int find_max(int q,int w,int e,int r)
{
return max(max(q,w),max(e,r));
}
main()
{
int a,b,c,d;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cout<<find_max(a,b,c,d);
}
