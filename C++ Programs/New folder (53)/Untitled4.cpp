
#include <iostream>
using namespace std;
int main() {
    string s;
    cout<<"Enter String:"<<endl;
    cin>>s;
    int ans=-1,n=s.length();
    for(int i=1;i<=n;i++){
        int flag=1,end=i-1,start=n-i;
        if(end>=start)
        break;
        for(int j=0;j<=end;j++){
            if(s[j]!=s[start+j])
            flag=0;
        }
        if(flag==1)
        ans=i;
    }
    cout<<ans;
}
/*
Output:

*/
