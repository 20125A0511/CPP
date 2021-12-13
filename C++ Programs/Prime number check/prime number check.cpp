#include<iostream>
using namespace std;
main()
{
int n,flag,i;
cout<<"Enter Integer Value to Check Prime Number:";
cin>>n;
for(int i=2 ; i < n/2 ; i++) {
      if(n%i == 0)
        {
         flag = 1;
      }
   }
    if(flag==0)
        {
        cout<<"Given Integer is Prime Number";
    }
    else
        {
            cout<<"Given Integer is Not a Prime Number";
    }
}
