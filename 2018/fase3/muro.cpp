#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, MOD = 1e9 + 7;
    cin >> n;
    ll resp = 1;
    vector<ll> fibo(n+1);
    fibo[0] = 1;
    fibo[1] = 1;
    fibo[2] = 5;
    for (int i = 3; i <= n; i++){
        fibo[i] = (fibo[i-1] + 4*fibo[i-2] + 2*fibo[i-3])%MOD;
    }
    cout << fibo[n] << "\n";
}