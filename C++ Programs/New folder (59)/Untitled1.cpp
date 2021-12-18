#include<bits/stdc++.h>
using namespace std;
main()
{
cout<<"Enter Array Size:"<<endl;
int n;
cin>>n;
int  a[n],b[n],sum[n],sor[n];
cout<<"Enter 1st Array Elements:"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter 2nd Array Elements:"<<endl;
for(int i=0;i<n;i++)
{
cin>>b[i];
}
for(int i=0;i<n;i++)
{
sum[i]=a[i]+b[i];
}
cout<<"Sum without sort:"<<endl;
for(int i=0;i<n;i++)
{
cout<<sum[i]<<" "<<endl;
}
sort(sum,sum+n);

cout<<"Sum After sort:"<<endl;
for(int i=0;i<n;i++)
{

        cout<<sum[i]<<" ";
}
}
/*Output:
Enter Array Size:
4
Enter 1st Array Elements:
10
40
20
90
Enter 2nd Array Elements:
1
2
3
4
Sum without sort:
11
42
23
94
Sum After sort:
11 23 42 94
Process returned 0 (0x0)   execution time : 15.950 s
Press any key to continue.
*/
