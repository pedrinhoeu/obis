#include <bits/stdc++.h>

using namespace std;

int main(){
    string pala1, pala2;
    cin >> pala1 >> pala2;
    int val1, val2;

    if(pala1 == "norte"){
        val1 = 1;
    }
    if(pala1 == "sul"){
        val1 = 3;
    }
    if(pala1 == "oeste"){
        val1 = 4;
    }
    if(pala1 == "leste"){
        val1 = 2;
    }

    if(pala2 == "norte"){
        val2 = 1;
    }
    if(pala2 == "sul"){
        val2 = 3;
    }
    if(pala2 == "oeste"){
        val2 = 4;
    }
    if(pala2 == "leste"){
        val2 = 2;
    }

    if(pala1 == pala2){
        cout << 0 << endl;
    }
    else if(abs(val1 - val2)%2 == 1){
        cout << 90 << endl;
    }
    else{
        cout << 180 << endl;
    }
}