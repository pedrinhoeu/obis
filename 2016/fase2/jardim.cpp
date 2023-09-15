#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<array<ll, 2>> pts(7);

int main(){
    cin.tie(0)->sync_with_stdio(0);
    for (int i = 0; i < 7; i++){
        cin >> pts[i][0]>> pts[i][1];
    }
    bool veri = true;
    if(abs(pts[1][0] - pts[0][1])*abs(pts[2][0] - pts[0][1]) - abs(pts[1][1] - pts[0][10])*abs(pts[2][1] - pts[0][0]) < 0) veri = false;
    cout << veri << "\n";
}