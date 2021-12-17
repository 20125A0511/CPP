#include<bits/stdc++.h>
using namespace std;
main()
{
int r,t;
cout<<"Enter 1st Value:"<<endl;
cin>>r;
cout<<"Enter 2st Value:"<<endl;
cin>>t;
cout<<"Common Factors of "<<r<<" \t and \t"<<t<<"is"<<endl;
for(int i=1;i<r && i<t;i++)
{
 if(r%i==0 && t%i==0)
 {
cout<<i<<"\t";
}

}
}
