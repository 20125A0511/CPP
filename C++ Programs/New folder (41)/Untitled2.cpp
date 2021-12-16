#include<bits/stdc++.h>
using namespace std;
main()

 {
    string s1,s2;
    cin>>s1>>s2;
    int freq[26]={0};
    for(int i=0;i<s1.length();i++)
        {
        int c=s1[i]-'A';
        freq[c]++;
    }
    for(int i=0;i<s2.length();i++){
        int c=s2[i]-'A';
        freq[c]++;
    }
    bool is_true=1;
    for(int i=0;i<26;i++){
        if(freq[i]!=1)
        is_true=false;
    }
    if(is_true)
    cout<<"no";
    else
    cout<<"yes";
}
