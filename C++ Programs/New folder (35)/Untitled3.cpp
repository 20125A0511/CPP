#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string ans;
    ans.push_back(s[0]);
    int lower=0;
    if(s[0]>='a' && s[0]<='z')
    lower=1;
    for(int i=1;i<s.length();i++){
    	int islow=0;
    	if(s[i]>='a' && s[i]<='z')
    	islow=1;
    	if(islow==lower)
    	ans.push_back(s[i]);
    	else {
    		if(islow==0){
    			ans.push_back(char('a'+s[i]-'A'));
    		} else {
    			ans.push_back(char('A'+s[i]-'a'));
    		}
    	}
    }
    cout<<ans;
}

