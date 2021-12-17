// https://i...content-available-to-author-only...e.com/f1XRcA
// The quick brown fox jumps over the lazy dog
#include <iostream>
using namespace std;
char make_low(char c){
    if('a'<=c && c<='z')
    return c;
    return char('a'+c-'A');
}
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int freq[26]={0},flag=1;
    for(int i=0;i<s.length();i++)
    s[i]=make_low(s[i]);
    for(int i=0;i<s.length();i++){
        int temp=s[i]-'a';
        freq[temp]++;
    }
    for(int i=0;i<=26;i++){
        if(freq[i]==0)
        flag=0;
    }
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
}
/*Output:
26
QWERTYUIOPASDFGHJKLZXCVBNM
YES
Process returned 0 (0x0)   execution time : 9.659 s
Press any key to continue.

 */
