#include <bits/stdc++.h>

using namespace std;

int main(){
    long long p, m, k, resp = -1, a, b;
    cin >> p >> m >> k;
    vector<long long> ord(m+1, 0);
    ord[0] = k;
    for (int i = 0; i < p; i++){
        cin >> a >> b;
        if(ord[b] == 0){
            ord[b] = a;
        }
    }
    for (int i = 0; i <= m; i++){
        if(ord[k] == 0){
            resp = i;
            break;
        }
        k = ord[k];
    }
    cout << resp << endl;
}