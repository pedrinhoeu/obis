#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll s, a, b, m=-1, n=-1, i, som;
    cin >> s >> a >> b;
    i = s;
    string teste;
    bool veri;
    while(i <= b){
        teste = to_string(i);
        veri = true;
        som = 0;
        for(auto j: teste){
            som += j-48;
        }
        if(som == s && i >= a){
            if(n == -1){
                n = i;
            }
            m = i;
        }
        i += 9;
    }
    cout << n << "\n" << m << "\n";
}