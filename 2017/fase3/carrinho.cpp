#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, INF = 1e18;
    double D;
    cin >> n >> D;
    double ant, C;
    vector<pair<double, double>> bats;
    vector<double> dp(n+2, INF);
    dp[0] = 0;
    dp[1] = 0;
    bats.push_back({0, 0});

    for (int i = 0; i < n; i++){
        cin >> ant >> C;
        bats.push_back({ant, C});
    }
    bats.push_back({D, 0});
    for (int i = 1; i <= n+1; i++){
        ant = bats[i].first;
        C = bats[i].second;
        for (int j = i+1; j <= n+1; j++){
            if(C != 0) dp[j] = min(dp[j], ((bats[j].first - ant)*(bats[j].first - ant))/C + dp[i]);
       }
    }
    cout << fixed << setprecision(3) << dp[n+1] << "\n";
}