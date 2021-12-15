#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;
int main(){
string s;
cin>>s;
int count=0;
int n=s.length();
for(int i=0;i<n;i++){
  if(isupper(s[i]))
  count++;
}
cout<<count;
}

