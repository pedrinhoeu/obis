#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, INF = 1e18;


struct BST{
    ll lw = INF, mx = 0, bst = 0;
};

struct SEG{
    BST null;
    vector<BST> bst;
    void init(){
        bst.resize(4*n);
    }
    BST merge(BST x, BST y){
        // if(x.lw == 0) x.lw = y.mx;
        // if(y.lw == 0) y.lw = x.mx;
        // if(x.mx == INF) x.lw = y.mx;
        // if(x.mx == INF) x.lw = y.mx;
        BST resp;
        resp.lw = min(x.lw, y.lw);
        resp.mx = max(x.mx, y.mx);
        resp.bst = max({x.bst, y.bst, x.mx - y.lw, y.mx - x.lw});
        return resp;
    }
    void update(ll l, ll r, ll node, ll val, ll id){
        if(l == r){
            bst[node].lw = min(bst[node].lw, val);
            bst[node].mx = max(bst[node].mx, val);
            return;
        }
        ll mid = (l+r)/2;
        if(id <= mid) update(l, mid, node*2, val, id);
        else update(mid+1, r, node*2+1, val, id);
        bst[node] = merge(bst[node*2], bst[node*2+1]);
    }
    BST query(ll l, ll r, ll node, ll st, ll ed){
        if(l > ed || r < st){
            return null;
        }
        if(l >= st && r <= ed){
            return bst[node];
        }
        ll mid = (l+r)/2;
        BST q1 = query(l, mid, node*2, st, ed), q2 = query(mid+1, r, node*2+1, st, ed);
        return merge(q1, q2);
    }
    void prin(){
        for (auto i: bst){
            cout << i.bst << " " << i.mx << " " << i.lw << "\n";
        }
        cout << "\n\n";
    }
};

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll q, a;
    cin >> n >> q;
    SEG tree;
    tree.init();
    for (int i = 0; i < n; i++){
        cin >> a;
        tree.update(1, n, 1, a, i+1);
    }
    ll op, l, r;
    for (int i = 0; i < q; i++){
        cin >> op >> l >> r;
        if(op == 1) tree.update(1, n, 1, l, r);
        else cout << tree.query(1, n, 1, l, r).bst << "\n";
    }
    
}