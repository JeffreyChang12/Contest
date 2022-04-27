#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define endl "\n"
const int inf = 1e18;


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
        
    auto dfs = [&](auto &&self, int curr, int p) -> void {
        // if(adj[curr].size()==1) {
        //     minVal[curr] = curr;
        // }
        // else {
        //     for(int x:adj[curr]) {
        //         if(x!=p) {
        //             self(self,x,curr);
        //             if(minVal[x]<minVal[curr]) {
        //                 minVal[curr]=minVal[x];
        //             }
        //         }
        //     }
        // }
        // return minVal[curr];
    };
    
    dfs(dfs,0,0);

        
    return 0;
}