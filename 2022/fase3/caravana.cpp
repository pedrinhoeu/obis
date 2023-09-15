#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, val = 0;
    cin >> n;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        val += nums[i];
    }
    val = val/n;
    for (auto i: nums){
        cout << val - i << "\n";
    }
    
}