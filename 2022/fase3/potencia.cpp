#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> nums(n), exp(n);
    ll resp = 0;
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        exp[i] = nums[i]%10;
        nums[i] = nums[i]/10;
    }
    ll temp;
    for (int i = 0; i < n; i++){
        temp = 1;
        for (int j = 0; j < exp[i]; j++){
            temp*=nums[i];
        }
        resp += temp;
    }
    cout << resp << "\n";
}