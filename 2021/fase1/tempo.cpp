#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p;
    cin >> n;
    vector<long long> pe(101, -1), es(101, 0);
    vector<bool> at(101, false);
    bool fzr= false;
    char op = 'T';
    while(n--){
        if(op == 'T'){
            fzr = false;
        }
        cin >> op >> p;
        if(op == 'T'){
            fzr = false;
        }
        if(fzr){
            for (int i = 0; i < 101; i++){
                if(at[i]){
                    es[i] += 1;
                }
            }
        }
        if(op == 'R'){
            at[p] = true;
        }
        
        if(op == 'E'){
            at[p] = false;
            if(pe[p] == -1){
                pe[p] = 0;
            }
            pe[p] += es[p];
            es[p] = 0;
        }
        if(op == 'T'){
            for (int i = 0; i < 101; i++){
                if(at[i]){
                    es[i] += p;
                }
            }
        }
        fzr = true;
    }
    for (int i = 0; i < 101; i++){
        if(pe[i] > -1){
            if(at[i]){
                cout << i << " " << -1 << endl;
            }
            else{
                cout << i << " " << pe[i] << endl;
            }
        }
    }
}