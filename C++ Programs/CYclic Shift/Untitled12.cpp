#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,goal;
    cin>>s>>goal;
    int n=s.length(),possible=0;
    for(int i=0;i<n;i++){
        if(s==goal)
        possible=1;
        // performing cyclic shift
        char c=s[n-1];
        s.pop_back();
        string temp;
        temp.push_back(c);
        s=temp+s;
    }
    if(possible==1)
    cout<<"true";
    else
    cout<<"false";

}
/* output:
abcde
cdeba
false
Process returned 0 (0x0)   execution time : 10.320 s
Press any key to continue.

abcde
bcdea
true
Process returned 0 (0x0)   execution time : 12.097 s
Press any key to continue.
*/

