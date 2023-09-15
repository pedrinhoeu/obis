#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
vector<ll> nums;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll l, r;
    cin >> n >> l >> r;
    nums.resize(n);
    ll cl = 1e18, cr = 1e18;
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        cl = min(cl, abs(l - nums[i]));
        cr = min(cr, abs(r - nums[i]));
    }
    sort(nums.begin(), nums.end());
    
    ll resp = max(cl, cr);
    for (int i = 1; i < n; i++){
        ll comp = (nums[i] + nums[i-1])/2;
        
        if(l <= comp && comp <= r)resp = max(resp, min(abs(nums[i] - comp), abs(nums[i-1] - comp)));
    }
    cout << resp << "\n";
}