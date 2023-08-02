#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, m, resp = 1e9, at;
    cin >> n >> m;
    vector<vector<ll>> nums(n, vector<ll> (m, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> nums[i][j];
        }
    }
    for (int j = 0; j < m; j++){
        at = 0;
        for (int i = 0; i < n; i++){
            at += nums[i][j];
        }
        resp = min(at, resp);
    }
    cout << resp << "\n";
}