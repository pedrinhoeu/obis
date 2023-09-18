#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    string pala1 = "", pala2 = "";
    while(n > 0 && pala1.size() < 5){
        pala1 += "I";
        n--;
        
    }
    while(n > 0){
        pala2 += "I";
        n--;
    }
    if(pala1.size() == 0) pala1 = '*';
    if(pala2.size() == 0) pala2 = '*';
    cout << pala1 << "\n";
    cout << pala2 << "\n";
}