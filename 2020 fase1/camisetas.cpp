#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, um=0, ds=0;
    cin >> n;
    vector<long long> cam(n);
    for (int i = 0; i < n; i++){
        cin >> cam[i];
        if(cam[i] == 1){
            um += 1;
        }
        else{
            ds += 1;
        }
    }
    long long p, m;
    cin >> p >> m;
    if(um <= p and ds <= m){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
}