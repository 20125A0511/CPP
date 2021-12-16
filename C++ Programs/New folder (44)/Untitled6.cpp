#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    cin>>(*(p+i));
    for(int i=1;i<n;i++)
    (*p)=max((*p),*(p+i));
    cout<<(*p)<<endl;
    cout<<"Size of float: "<<sizeof(float)<<endl;
cout<<"Size of int: "<<sizeof(int)<<endl;
cout<<"Size of double: "<<sizeof(double)<<endl;
cout<<"Size of char: "<<sizeof(char)<<endl;
cout<<"Size of Boolean:"<<sizeof(bool)<<endl;
cout<<"Size of Long Int:"<<sizeof(long)<<endl;
cout<<"Size of Short Int:"<<sizeof(short)<<endl;

}
