#include <bits/stdc++.h>

using namespace std;

int main(){
    int v=0;
    char p;
    for (int i = 0; i < 6; i++){
        cin >> p;
        if(p == 'V'){
            v+=1;
        }
    }
    if(v==0){
        cout << -1 << endl;
    }
    else if(v <= 2){
        cout << 3 << endl;
    }
    else if(v <= 4){
        cout << 2 << endl;
    }
    else{
        cout << 1 << endl;
    }
}