#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> nums(n);
    ll achou = -1, qual = -1;
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++){
        if((nums[i] == 0 or nums[i] == 5) and (achou == -1 or nums[n-1] < qual)){
            achou = i;
            qual = nums[i];
        } 
    }
    
    if(achou == -1) cout << -1 << "\n";
    else{
        swap(nums[n-1], nums[achou]);
        for (int i = 0; i < n; i++) cout << nums[i] << " ";
        cout << "\n";
    }
}