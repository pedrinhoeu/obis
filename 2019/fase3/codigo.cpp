#include <bits/stdc++.h>
using namespace std;
typedef int ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    set<string> pre, suf;
    string pala, temp;
    for (int i = 0; i < n; i++){
        cin >> pala;
        temp = "";
        for (int j = 0; j < 10; j++){
            temp += pala[j];
            pre.insert(temp);
        }
        
        
    }
    
}