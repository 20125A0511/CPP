#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    for(int i=1;i<n;i++){
        if(s[0]>='A' && s[0]<='Z'){
            if(s[i]>='a'&&s[i]<='z'){
                s[i]=s[i]-' ';

            }
        }
         if(s[0]>='a' && s[0]<='z'){
            if(s[i]>='A'&& s[i]<='Z'){
                s[i]=s[i]+' ';
            }
         }
    }
    cout <<s<<endl;
}
