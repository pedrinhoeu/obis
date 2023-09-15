#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, a, c = 0, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if(a < 50) s++;
        else if(a < 85) c++;
    }
    cout << s << " " << c << "\n";
}