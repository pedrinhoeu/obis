#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long p = 0;
    bool possi = true;
    string pala;
    while(cin >> pala){
        for (int i = 0; i < pala.size(); i++){
            if(pala[i] == '{'){
                p += 1;
            }
            if(pala[i] == '}'){
                p -= 1;
            }
            if(p < 0){
                possi = false;
            }
        }
    }
    if(!possi or p != 0){
        cout << "N" << "\n";
    }
    else{
        cout << "S" << "\n";
    }
}