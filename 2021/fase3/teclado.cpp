#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string pala, temp;
    ll n, resp = 0;
    cin >> pala >> n;
    map<char, ll> ma;
    ma['a'] = 2;
    ma['b'] = 2;
    ma['c'] = 2;
    ma['d'] = 3;
    ma['e'] = 3;
    ma['f'] = 3;
    ma['g'] = 4;
    ma['h'] = 4;
    ma['i'] = 4;
    ma['j'] = 5;
    ma['k'] = 5;
    ma['l'] = 5;
    ma['m'] = 6;
    ma['n'] = 6;
    ma['o'] = 6;
    ma['p'] = 7;
    ma['q'] = 7;
    ma['r'] = 7;
    ma['s'] = 7;
    ma['t'] = 8;
    ma['u'] = 8;
    ma['v'] = 8;
    ma['w'] = 9;
    ma['x'] = 9;
    ma['y'] = 9;
    ma['z'] = 9;
    ma['+'] = 0;
    bool comp = true;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if(pala.size() == temp.size()){
            comp = true;
            for (int j = 0; j < pala.size(); j++){
                if(pala[j] - '0' != ma[temp[j]]) comp = false;
            }
            if(comp) resp++;
        }
    }
    cout << resp << "\n";
}