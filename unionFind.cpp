#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define endl "\n"
const int inf = 1e18;

struct UnionFind {
    vector<int> size, parent, value;
    
    UnionFind(int N) : size(N,1), parent(N), value(N,0){
        for(int x=0;x<N;x++) {
            parent[x]=x;
        }
    }
    
    int find(int x) {
        if(parent[x]!=x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    void join(int x, int y) {
        int xset = find(x);
        int yset = find(y);
        
        if(xset!=yset) {
            if(size[xset]<size[yset]) {
                swap(xset,yset);
            }
            parent[yset] = xset;
            size[xset] += size[yset];
        }
    }
};
    
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    int T;
    cin >> T;
    for(int t=1;t<=T;t++) {
        int N;
        cin >> N;
        vector<int> locations(N);
        for(int x=0;x<N;x++) {
            cin >> locations[x];
        }
        
        UnionFind unionF(N);

        
        
        
        
    }
    
    
    
    return 0;
}