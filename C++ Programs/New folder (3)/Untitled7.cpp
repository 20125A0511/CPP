#include<iostream>
using namespace std;
main()
{
 cout<<"Enter Left Element:";
    int left,right,i;
    cin>>left;
    cout<<"Enter Right Element:";
    cin>>right;
    cout<<"Printing Numbers in Between \t" <<left <<"\tand\t"<< right <<"\n";
    for(i=left;i<=right;i++)
    {
        cout<<"\t"<<i;
    }
}
