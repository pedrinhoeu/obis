#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string a;
    vector<string> matriz(n);
    for (int i = 0; i < n; i++){
        cin >> matriz[i];
    }

    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(matriz[i][j] == '0'){
                q.emplace(i, j);
            }
        }
        }
    int di[] = {-1,1,0,0}, dj[] = {0,0,-1,1};
    while(!q.empty()){
        auto [i, j] = q.front();
        q.pop();

        for (int k = 0; k < 4; k++){
            int curi = i + di[k], curj = j + dj[k];
            if(curi >= 0 && curi < n && curj >= 0 && curj < n){
                if(matriz[curi][curj]){
                    matriz[curi][curj] = min(char(matriz[i][j] + 1), '9');
                }
            }
        }
        
    }
}