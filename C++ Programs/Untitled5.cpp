#include<cstring>
#include <iostream>
using namespace std;
bool isAnBn(string str)
{
int n = str.length();
int i;
for (i = 0; i < n; i++)
if (str[i] != 'x')
break;
if (i * 2 != n)
return false;
int j;
for (j = i; j < n; j++)
if (str[j] != 'y')
return false;
return true;
}
int main()
{
cout<<"Enter String:";
string str;
cin>>str;
// Function call
isAnBn(str) ? cout << "1" : cout << "0";
}
