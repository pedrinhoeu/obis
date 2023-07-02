#include <bits/stdc++.h>

using namespace std;

int n,m;
vector<string> mat;
void op(int i, int j){
    if(i == n-1 or j == m-1 or i == 0){
        return;
    }
    for (int k = 0; k < m-1; k++){
        if(mat[i][k] == 'o'){
            if(mat[i+1][k] == '#'){
                mat[i][j] = 'o';
                mat[i+1][j] = 'o';
                op(i, j-1);
                op(i, j+1);
            }
        }
    }
    
    
    
}

int main() {
    cin >> n >> m;
    vector<string> mt(n);
    for(int i = 0; i < n; i++) {
        cin >> mt[i];
    }
    mat = mt;

    op(1, 1);
}