#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, ant = 0;
    bool veri=false;
    cin >> n;
    vector<ll> nums(n), som(n), inv(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        som[i] = nums[i] + ant;
        ant += nums[i];
    }
    ll i = 0;
    ant = 0;
    for (int j = n-1; j > -1; j--){
        inv[i] = nums[j]+ant;
        ant += nums[j];
        i++;
    }
    ll difs = 0, e, d, mid;
    i = 0;
    bool achou;
    while(i < n){
        achou = false;
        e = 0;
        d = n;
        while(e <= d){
            mid = (e+d)/2;
            if(som[i] == inv[mid]){
                achou = true;
                break;
            }
            else if (som[i] > inv[mid]){
                e = mid+1;
            }
            else{
                d = mid-1;
            }
        }
        if(!achou){
            difs += 1;
        }
        
        i++;
    }
    cout << difs << "\n";
}