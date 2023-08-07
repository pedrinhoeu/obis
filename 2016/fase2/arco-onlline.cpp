#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, ult = 0;

struct seg{
    vector<ll> nums;
    void init(){
        nums.resize(n*2*4, 0);
    }
    void update(ll e, ll d, ll id, ll node){
        if(e == d){
            nums[node] += 1;
            return;
        }
        ll mid = (e+d)/2;
        if(id <= mid){
            update(e, mid, id, node*2);
        }
        else{
            update(mid+1, d, id, node*2+1);
        }
        nums[node] = nums[node*2] + nums[node*2+1];
    }
    ll querry(ll e, ll d, ll st, ll ed, ll node){
        if(d < st || e > ed){
            return 0;
        }
        ll mid = (e+d)/2;
        ll q1 = querry(e, mid, st, ed, node*2), q2 = querry(mid+1, d, st, ed, node*2+1);
        return q1 + q2;
    }
};

int main(){
    cin >> n;
    vector<pair<ll, ll>> nums(n, {0, 0}), dist(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i].first >> nums[i].second;
        nums[i].first = abs(nums[i].first);
        nums[i].second = abs(nums[i].second);
        dist[i].first = nums[i].first * nums[i].second;
        dist[i].second = i;
    }
    sort(dist.begin(), dist.end());
    ll v = 0, ant = -1;
    for (int i = 0; i < n; i++){
        if(ant == dist[i].first){
            dist[i].first = dist[i].second;
            dist[i].second = v;
        }
        else{
            ant = dist[i].first;
            dist[i].first = dist[i].second;
            dist[i].second = v;
            v++;
        }
    }
    sort(dist.begin(), dist.end());
    ll comp=0;
    seg tree;
    tree.init();
    for (int i = 0; i < n; i++){
        comp = tree.querry(1, n, 1, dist[i].second + comp, 1);
        cout << comp << "\n";
    }
    
}