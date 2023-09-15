#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, q;
struct BIT{
    vector<ll> bt;
    void init(){
        bt.resize(n+1);
    }
    void update(ll id, ll val){
        val = val - query(id, id);
        while (id <= n){
            bt[id] += val;
            id += id & (-id);
        }
    }
    ll query(ll id){
        ll resp = 0;
        while(id){
            resp += bt[id];
            id -= id & (-id);
        }
        return resp;
    }
    ll query(ll l, ll r){
        return query(r) - query(l-1);
    }

};

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> q;
    ll op, val, r;
    BIT tree;
    tree.init();
    for (int i = 0; i < n; i++){
        cin >> val;
        tree.update(i+1, val);
    }
    for (int i = 0; i < q; i++){
        cin >> op;
        if(op == 1){
            cin >> r;
            cout << tree.query(1, r) << "\n";
        }
        else{
            cin >> r >> val;
            tree.update(r, val);
        }
    }
    
     
}