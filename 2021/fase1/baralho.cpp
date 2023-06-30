#include <bits/stdc++.h>

using namespace std;

int main(){
    string pala, temp;
    cin >> pala;
    int num, tc=13, te=13, tu=13, tp=13;
    bool ec=false, ee = false, eu = false, ep = false;
    vector<long long> c(13,0), e(13,0), u(13,0), p(13,0);
    for (int i = 0; i < pala.length(); i++){
        num = (pala[i]-'0')*10 + (pala[i+1]-'0');
        if(pala[i+2] == 'P'){
            if(p[num-1] == 1){
                ep = true;
            }
            p[num-1] = 1;
            tp -= 1;
        }
        if(pala[i+2] == 'C'){
            if(c[num-1] == 1){
                ec = true;
            }
            c[num-1] = 1;
            tc -= 1;
        }
        if(pala[i+2] == 'U'){
            if(u[num-1] == 1){
                eu = true;
            }
            u[num-1] = 1;
            tu -= 1;
        }
        if(pala[i+2] == 'E'){
            if(e[num-1] == 1){
                ee = true;
            }
            e[num-1] = 1;
            te -= 1;
        }
        i += 2;
    }
    if(ec){
        cout << "erro" << endl;
    }
    else{
        cout << tc << endl;
    }
    if(ee){
        cout << "erro" << endl;
    }
    else{
        cout << te << endl;
    }
    if(eu){
        cout << "erro" << endl;
    }
    else{
        cout << tu << endl;
    }
    if(ep){
        cout << "erro" << endl;
    }
    else{
        cout << tp << endl;
    }    
}