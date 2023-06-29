#include <bits/stdc++.h>

using namespace std;

int main(){
    int casa, entrega;
    cin >> casa >> entrega;
    int casas[casa], entregas[entrega];
    for (int i = 0; i < casa; i++){
        cin >> casas[i];
    }
    for (int i = 0; i < entrega; i++){
        cin >> entregas[i];
    }
    int atual = 0, local, resp=0;
    for (int i = 0; i < entrega; i++){
        int esq = 0, dir = casa-1;
        while(esq <= dir){
            int mid = (dir+esq)/2;
            if(casas[mid] == entregas[i]){
                local = mid;
                break;
            }
            else if(casas[mid] < entregas[i]){
                esq = mid+1;
            }
            else{
                dir = mid-1;
            }
        }
        if(local > atual){
            resp += local - atual;
        }
        else{
            resp += atual - local;
        }
        atual = local;
    }
    cout << resp << "\n";
}