#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;
vector<ll> letras(26, 0);

ll gcd(ll a, ll b){
    ll temp;
    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }
    while(b != 0){
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string pala;
    cin >> n >> pala;
    for (auto i: pala){
        letras[i-97] += 1;
    }

    ll som = -1;
    for (auto i: letras){
        if(i != 0 && som == -1){
            som = i;
        }
        else if(i != 0){
            som = gcd(som, i);
        }
    }
    if(som == 1){
        cout << "*" << "\n";
    }
    else{
        for (int i = 0; i < n/som; i++){
            cout << pala[i];
        }
        cout << "\n";
    }
}