#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<vector<ll>> mat(n, vector<ll>(n, 0));
    ll i = 1;
    while(i <= (n+1)/2){
        for (int j = i-1; j <= n-i; j++){
            mat[i-1][j] = i;
        }
        for (int j = i-1; j <= n-i; j++){
            mat[j][n-i] = i;
        }
        for (int j = i-1; j <= n-i; j++){
            mat[n-i][j] = i;
        }
        for (int j = i-1; j <= n-i; j++){
            mat[j][i-1] = i;
        }
        i++;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}