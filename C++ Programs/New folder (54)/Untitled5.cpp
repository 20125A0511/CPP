//Sets of prime number
#include<bits/stdc++.h>
using namespace std;
prime(int a)
{
int res;
int flag=0;
int i;
int m=a/2;
for(i = 2; i <= m; i++)
{
if(a % i == 0)
{
cout<<"Number is not Prime."<<endl;
flag=1;
break;
}
}
for (int i = 2; i <= a; i++) {
            cout << i << " ";
    }

}
main()
{
    int n;
    cin>>n;
    prime(n);
}
