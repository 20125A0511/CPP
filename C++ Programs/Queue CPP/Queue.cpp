#include <bits/stdc++.h>
using namespace std;
void show(queue<int>q){
    while(!q.empty()){
        cout<<q.back()<<" ";
q.pop();
    }
    cout<<"\n";
}
int main() {
    queue<int>q;
    q.push(15);
    q.push(14);
    q.push(13);
    q.push(12);
    cout<<"after pushing values in queue\n";
    show(q);
    q.pop();
    cout<<"after poping values in queue\n";
    show(q);
    cout<<"front value in queue\n";
    cout<<q.front()<<"\n";

}
