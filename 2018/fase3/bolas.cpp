#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    vector<ll> nums(10);
    ll a;
    for (int i = 0; i < 8; i++){
        cin >> a;
        nums[a] += 1;
    }

    bool veri = true;
    for(auto i: nums) if(i > 4) veri = false;

    if(veri) cout << "S\n";
    else cout << "N\n";

}