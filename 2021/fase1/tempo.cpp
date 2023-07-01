#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, t=1, add=0;
    cin >> n;
    vector<long long> pe(110, 0), es(110, 0);
    vector<bool> at(110, false);
    char op;
    while(n--){
        cin >> op >> p;
        
        if(op == 'R'){
            t += add;
            add = 1;
            es[p] = t;
            at[p] = true;
        }
        if(op == 'E'){
            t += add;
            add = 1;
            pe[p] += t - es[p];
            at[p] = false;
        }
        if(op == 'T'){
            t += p;
            add = 0;
        }
    }
    for (int i = 0; i <= 110; i++){
        if(es[i]){
            cout << i << " ";
            if(at[i]){
                cout << -1 << endl;
            }
            else{
                cout << pe[i] << endl;
            }
        }
    }
}