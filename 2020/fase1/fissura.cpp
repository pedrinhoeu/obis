#include <bits/stdc++.h>

using namespace std;

long long n, v;
vector<string> l;

void lava(long long i, long long j){
    if(i >= n or j >= n   or j < 0 or i < 0){
        return;
    }
    int numero = l[i][j]-48;
    if(numero > v or  l[i][j] == '*'){
        return;
    }
    l[i][j] = '*';
    lava(i, j-1);
    lava(i-1, j);
    lava(i, j+1);
    lava(i+1, j);
}

int main(){
    cin >> n >> v;
    vector<string> lav(n);
    for (int i = 0; i < n; i++){
        cin >> lav[i];
    }
    l = lav;
    lava(0, 0);
    for (int i = 0; i < n; i++){
        cout << l[i] << endl;
    }
}