#include <bits/stdc++.h>

using namespace std;

int main(){
    string n, v;
    cin >> n >> v;
    vector<int> p1(26, 0), p2(26, 0);
    int num;
    for (int i = 0; i < n.length(); i++){
        if(v[i] != '*'){
            num = v[i] - 97;
            p2[num] += 1;
        }
        num = n[i] - 97;
        p1[num] += 1;
    }
    
    bool igual = true;
    for (int i = 0; i < 26; i++){
        if(p1[i] < p2[i]){
            igual = false;
        }
    }
    
    if(igual){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
}