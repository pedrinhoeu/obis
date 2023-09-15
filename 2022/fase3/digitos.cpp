#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    ll l = 0, tam = 0, at = 0, temp = 0;
    bool achou = false;
    for (int i = 0; i < n; i++){
        achou = false;
        tam += nums[i];
        l = i+1;
        at = tam;
        temp = 0;
        while(l < n){
            temp += nums[l];
            l++;
            if(temp == at+1){
                at = temp;
                temp = 0;
                if(l == n) achou = true;
            }
            temp *= 10;
        }
        if(achou) break;
        tam *= 10;
    }
    cout << tam << "\n";
}