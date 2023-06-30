#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, divs = 0;
    cin >> n;

    for (int i = 1; i <= sqrt(n); i++){
        if(n%i==0){
            if(i*i == n){
                divs += 1;
            }
            else{
                divs += 2;
            }
        }
    }
    cout << divs;
}