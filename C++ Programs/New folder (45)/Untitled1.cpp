#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    //n: size of input array
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int sum,msum=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=0;
            for(k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            msum=max(msum,sum);
        }
    }
    cout<<msum<<endl;
  return 0;
}
