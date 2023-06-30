#include <bits/stdc++.h>

using namespace std;

int main(){
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    if(a1 < a2 && a2 < a3 && a3 < a4 && a4 < a5){
        cout << "C" << endl;
    }
    else if(a1 > a2 && a2 > a3 && a3 > a4 && a4 > a5){
        cout << "D" << endl;
    }
    else{
        cout << "N" << endl;
    }
}