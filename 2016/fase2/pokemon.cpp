#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, a, b, c, resp = 0;
    array<ll, 3> arr;
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());
    if(n >= arr[0]){
        resp += 1;
        n -= arr[0];
    }
    if(n >= arr[1]){
        resp += 1;
        n -= arr[1];
    }
    if(n >= arr[2]){
        resp += 1;
        n -= arr[2];
    }
    cout << resp << "\n";
}