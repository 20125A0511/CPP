#include<iostream>
using namespace std;
main()
{
int n,i;
cout<<"Enter Size of array:";
cin>>n;
int a[n],s,count =0,r;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter Search element:";
cin>>s;
for(i=0;i<n;i++)
{
if(s==a[i])
{
cout<<s<<"\t"<<"Element found at position"<<"\t"<<i;
cout<<"\n";
count++;
}
}
if(count==0)
{
    cout<<"Search Element present in Array and does not repeat";

}
else{
cout<<"\n"<<"Search element repeated \t"<<count<<"\t Times";
}
}
