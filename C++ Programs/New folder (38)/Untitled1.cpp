#include<iostream>
using namespace std;
main()
{
int n;
cout<<"Enter Array Size:";
cin>>n;
int  c=0,i,people[n],house[n];
cout<<"\n"<<"Enter Homeless People:";
for(i=0;i<n;i++)
{
cin>>people[i];
}
cout<<"Enter Houses:";
for(i=0;i<n;i++)
{
cin>>house[i];
}
for(i=0;i<n;i++)
{
if(people[i]<=house[i]||house[i]>=people[i])
{
    cout<<"House Allocated for People at house \t"<<i<<endl;

}
else if(people[i]<=house[i+1])
{
    cout<<"HOuse Allocated for people at house \t"<<i<<endl;
    house[i+1]=0;

}
else
{
    cout<<"ALL HOuses Are Allocated to Home less people";
}
}
}
