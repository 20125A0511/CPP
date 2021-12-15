#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<s.length();i++){
        int found=0,len=ans.length();
        for(int j=0;j<len;j++){
            if(ans[j]==s[i])
            found=1;
        }
        if(found==0)
        ans.push_back(s[i]);
    }
    cout<<ans;
}
