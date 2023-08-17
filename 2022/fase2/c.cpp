#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, resp=0;
    cin >> n;
    string pala;
    cin >> pala;

    bool pali = false;
    ll esq, dir;

    for (ll i = 0; i < n; i++){
        for (ll j = n-1; j >= i; j--){
            pali = true;
            esq = i;
            dir = j;
            while(esq <= dir){
                if(pala[esq] != pala[dir]){
                    pali = false;
                }
                esq++;
                dir--;
            }
            if(pali){
                resp = max(resp, abs(j-i)+1);
            }
        }
        
    }
   cout << resp << "\n";
}