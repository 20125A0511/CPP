// Connect `n` ropes with minimal cost

// Given n ropes of different lengths, connect them into a single rope with minimum cost. Assume that the cost to connect two ropes is the same as the sum of their lengths.

// For example,

// Input:  [5, 4, 2, 8]

// Output: The minimum cost is 36

// [5, 4, 2, 8] –> First, connect ropes of lengths 4 and 2 that will cost 6.
// [5, 6, 8]    –> Next, connect ropes of lengths 5 and 6 that will cost 11.
// [11, 8]      –> Finally, connect the remaining two ropes that will cost 19.

// Therefore, the total cost for connecting all ropes is 6 + 11 + 19 = 36.

//

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        p.push(temp);
    }
    while(p.size()>1){
        int sum=0;
        sum+=p.top();
        p.pop();
        sum+=p.top();
        p.pop();
        ans+=sum;
        p.push(sum);
    }
    cout<<ans;
}
