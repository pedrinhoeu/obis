#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, t;
    cin >> n >> t;
    if(t == 0) cout << n << "\n";
    else if(t == 1) cout << n*(n-1) << "\n";
    else{
        ll resp = 0;
        for (int i = 0; i < n-2; i++){
            for (int j = n-1; j > i; j--){
                resp += j-i-1;
            }
            
        }
        cout << resp << "\n";
    }
}