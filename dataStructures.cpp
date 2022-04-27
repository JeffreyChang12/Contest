#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define endl "\n"
const int inf = 1e18;

bool sortCol(const vector<int>& v1, const vector<int>& v2) {
    return v1[1] < v2[1];
}

struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 0;
    
    vector<int> array1(5,0);
    sort(array1.begin(),array1.end(),greater<int>()); //Greatest to least
    vector<vector<int>> array2(5,vector<int>(5,0));
    sort(array2.begin(),array2.end(),sortCol);
    
    stack<int> stack1;
    stack1.push(1);
    x = stack1.top();
    stack1.pop();
    
    queue<int> que;
    que.push(1);
    que.push(2);
    x = que.front();
    que.pop();
    
    priority_queue<int> pq; //Greatest to least
    pq.push(1);
    pq.push(3);
    pq.push(2);
    x = pq.top();
    priority_queue<pi,vector<pi>,greater<pi>> pq2; //Least to greatest
    pq2.push(mp(2,10));
    pq2.push(mp(3,30));
    pq2.push(mp(1,20));
    x = pq2.top().second;
    pq2.pop();
    x = pq2.top().second;
    
    set<int> set1; //Least to greatest, ",greater<int>" for reverse, binary search tree
    set1.insert(2);
    set1.insert(4);
    set1.insert(1);
    if(set1.count(2) || set1.find(2)!=set1.end()) { //Contains
        // cout << *set1.find(2);
        set1.erase(2);
    }
    
    unordered_set<int> set2;
    set2.insert(40);
    set2.insert(20);
    set2.insert(70);
    set2.insert(40);
    if(set2.count(40) || set2.find(40)!=set2.end()) {
        set2.erase(40);
    }
    
    map<int,int> map1; //Sorted by keys
    map1[2] = 20;
    map1[5] = 50;
    map1[3] = 30;
    map1.insert(mp(7,70));
    if(map1.count(7) || map1.find(7)!=map1.end()) {
        // cout << map1[7] << endl;
        map1.erase(7);
        // cout << map1.count(7) << endl;
        // cout << map1[7] << endl;
        // cout << map1.count(7) << endl;
        map1.begin()->first;
        map1.rbegin()->first; //last key
    }
    
    unordered_map<int,int> map2;
    map2[4] = 7;
    map2[6] = 2;
    map2[5] = 1;
    if(map2.count(4)) {
        map2.erase(4);
    }
    
    unordered_map<pi, int, hash_pair> map3;
    map3[mp(1,2)] = 2;
    
    return 0;
}