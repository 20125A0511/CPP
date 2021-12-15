#include<iostream>
#include<string>
using namespace std;//string check xnyn(xxxyyy valid,xxyx invalid
int main(){
string str;
cin>>str;
int len=str.length();
int countx=0,county=0;
for(int i=0;i<len;i++){

if(str[i]=='x'){

countx++;
}
else
{
if(str[i]=='y')
county++;
}
}
if(countx==county){

cout<<1;
}
else
{
cout<<0;
}
}

