#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min({abs(a+b-c-d), abs(a-b+c-d), abs(a-b-c+d)}) << "\n";
}