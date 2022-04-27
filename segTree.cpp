#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define endl "\n"
const int inf = 1e18;

struct SegmentTree
{
    int n;
    int base = 0;
    vector<int> segtree;
    vector<int> values;

    SegmentTree(int len) : n(len), segtree(len*2,base) {}

    SegmentTree(vector<int> &arr) : n(arr.size()), segtree(n*2) {
        for(int x=0;x<n;x++) {
            segtree[x+n] = arr[x];
        }
        for(int x=n-1;x>0;x--) {
            segtree[x] = merge(segtree[x*2],segtree[x*2+1]);
        }
    }
    
    int merge(int a, int b) {
        return a+b;
    }
    
    int query(int l, int r) {
        l += n;
        r += n;
        int lr = base, rr = base;
        for( ; l<=r; l/=2, r/=2) {
            if(l%2==1) {
                lr = merge(lr, segtree[l]);
                l++;
            }
            if(r%2==0) {
                rr = merge(rr, segtree[r]);
                r--;
            }
        }
        return merge(lr,rr);
    }
    
    void update(int index, int val) {
        segtree[index+n] += val;
        for(int k = (index+n)/2; k>0; k/=2) {
            segtree[k] = merge(segtree[k*2],segtree[k*2+1]);
        }
    }
};

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    vector<int> vals(n);
    for(int x=0;x<n;x++) {
        cin >> vals[x];
    }
    SegmentTree segTree(vals);
    
    int q;
    cin >> q;
    for(int x=0;x<q;x++) {
        char ch;
        cin >> ch;
        if(ch=='q') {
            int a,b;
            cin >> a >> b;
            cout << segTree.query(a-1,b-1) << endl;
        }
        else {
            int a,b;
            cin >> a >> b;
            segTree.update(a-1,b);
        }
    }
    
    return 0;
}
