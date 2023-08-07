#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, m, resp = 0;
    cin >> n >> m;
    vector<ll> nums(n), ops(m), som(n, 0);
    for (ll i = 0; i < n; i++){
        cin >> nums[i];
        resp += nums[i];
    }
    for (ll i = 0; i < m; i++){
        cin >> ops[i];
    }
    ll comec=0, fim=0, z=0;
    cout << endl;
    for(ll i = 0; i < m; i++){
        fim = min(nums[ops[i]-1] + ops[i], n-1);
        comec = max(ops[i] - nums[ops[i]-1] , z);
        cout << nums[ops[i]-1] << " " << ops[i] << " " << comec << " " << fim << endl;
        som[comec] += 1;
        som[fim] -= 1;
    }
    cout << resp << "\n";
}