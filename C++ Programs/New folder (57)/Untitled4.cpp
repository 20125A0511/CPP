// https://i...content-available-to-author-only...e.com/fSQNsh
#include <bits/stdc++.h>
using namespace std;
void a(vector<pair<pair<int,int>,string>> &v,string s,int x,int y){
    v.push_back({{x,y},s});
}
int b(vector<pair<pair<int,int>,string>> v){
    return v.size();
}
void c(vector<pair<pair<int,int>,string>> &v){
    vector<pair<pair<int,int>,string>> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it).first.first<<" "<<(*it).first.second<<" "<<(*it).second<<"\n";
    }
    cout<<endl;
}
void d(vector<pair<pair<int,int>,string>> &v){
    sort(v.begin(),v.end());
}
int main() {
    vector<pair<pair<int,int>,string>>v;
    //inserting values in the vectors
    a(v,"abc",0,0);
    a(v,"xyz",1,0);
    a(v,"tuv",0,2);
    //printing size of vector
    cout<<b(v)<<endl;
    // printing the vector
    c(v);
    // sorting the vector
    d(v);
    // printing again
    c(v);
}
