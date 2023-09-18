#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, q, MAX_N = 1e5, v;
    cin >> n >> q;
    vector<ll> resp(min(n, MAX_N));
    for(int i = 0; i < min(n, MAX_N); i++) resp[i] = i+1;
    for (int i = 0; i < q; i++){
        cin >> v;
        for (int j = 0; j < min(n, MAX_N); j++) resp[j] += resp[j]/v;
        for(int i = 0; i < min(n, MAX_N) && resp[i] < n; i++) cout << resp[i] << "\n";
    }
    
}