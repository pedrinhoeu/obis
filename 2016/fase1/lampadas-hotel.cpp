#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, j, k, l;
    cin >> i >> j >> k >> l;
    if(i != k && j != l){
        cout << 1 << "\n";
    }
    else if(i != k && j == l){
        cout << 1 << "\n";
    }
    else if(i == k && j == l){
        cout << 0 << "\n";
    }
    else if(i == k && j != l){
        cout << 2 << "\n";
    }
}