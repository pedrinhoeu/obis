#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
ll INF= 0x3f3f3f3f;
vector<vector<ll>> mt;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    string pala;
    mt.resize(n, {});
    queue<vector<int>> qq;
    for (int i = 0; i < n; i++){
        cin >> pala;
        for (int j = 0; j < n; j++){
            if(pala[j] == '0'){
                mt[i].push_back(0);
                qq.push({i, j, 0});
            }
            else{
                mt[i].push_back(INF);
            }
        }
    }
    vector<int> at;
    while(!qq.empty()){
        at = qq.front();
        qq.pop();
        mt[at[0]][at[1]] = min(at[2], 9);
        if(at[0] > 0 ){
            if(mt[at[0]-1][at[1]] == INF){
                mt[at[0]-1][at[1]] = at[2]+1;
                qq.push({at[0]-1, at[1], at[2]+1});
            }
        }
        if(at[1] > 0){
            if(mt[at[0]][at[1]-1] == INF){
                mt[at[0]][at[1]-1] = at[2]+1;
                qq.push({at[0], at[1]-1, at[2]+1});
            }
        }
        if(at[0]+1 < n){
            if(mt[at[0]+1][at[1]] == INF){
                mt[at[0]+1][at[1]] = at[2]+1;
                qq.push({at[0]+1, at[1], at[2]+1});
            }            
        }
        if(at[1]+1 < n){
            if(mt[at[0]][at[1]+1] == INF){
                mt[at[0]][at[1]+1] = at[2]+1;
                qq.push({at[0], at[1]+1, at[2]+1});
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << mt[i][j];
        }
        cout << "\n";
    }
}