#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t, c, o, q, v;
    cin >> t >> c;
    vector<long long> ord(t, -1);
    for (int i = 0; i < c; i++){
        cin >> o >> q;
        if(ord[o-1] == -1){
            ord[o-1] = 0;
        }
        for (int j = 0; j < q; j++){
            cin >> v;
            ord[v-1] = 1;
        }
        
    }
    for (int i = 0; i < t; i++){
        if(ord[i] == 0){
            cout << i+1 << endl;
        }
    }
    
}