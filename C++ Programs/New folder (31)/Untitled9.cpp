#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string m;
m=s;

 reverse(s.begin(),s.end());
 if(s==m){
  cout<<"it is palindrome";
 }
 else
 {
  cout<<"it is not palindrome";
 }

}
