#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    if(n == 2){
        cout << -1 << "\n";
    }
    else if(n&1){
        vector<vector<ll>> mat(n, vector<ll>(n));
        ll ant = 1;
        for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)mat[i][j] = ant++;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++)cout << mat[i][j] << " ";
            cout << "\n";
        }
    }
    else{
        vector<vector<ll>> mat(n, vector<ll>(n));
        vector<ll> som(n, 0);
        ll ant = 1;
        for (int j = 0; j < n-1; j++){
            mat[0][j] = ant++;
            som[j] += mat[0][j];
        }
        ll comp = n*(n-1)/2;
        mat[0][n-1] = comp;
        som[n-1] = comp;
        ll div = ((comp/n)+1)*n;
        for (int i = 1; i < n-1; i++){
            for (int j = 0; j < n; j++){
                mat[i][j] = mat[i-1][j] + comp;
                som[j] += mat[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            mat[n-1][i] = 4*mat[n-2][i] - som[i];
            
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++)cout << mat[i][j] << " ";
            cout << "\n";
        }
    }
}