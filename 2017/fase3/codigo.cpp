#include <bits/stdc++.h>
using namespace std;
#define MAX 10

set<string> pre[MAX+1],suf[MAX+1];
int N;
string pala;

int main(){
    cin >> N;
    bool veri = false;
    for ( int i = 0; i < N; i++ ){
        cin >> pala;
        for ( int k = MAX; k > 0; k-- ){
            string temp (pala,0,k);
            if ( suf[k].count( temp ) > 0 && !veri){
                if (k == MAX){
                    cout << pala << endl;
                    veri = true;
                }
                else {
                    string suf (pala,k,MAX-k);
                    if ( pre[MAX-k].count( suf ) > 0 && !veri){
                        cout << pala << endl;
                        veri = true;
                    }
                }
            }
        }

        for ( int k = MAX; k >= 0; k-- ){
            if ( k < MAX && k > 0){
                string temp (pala,0,k);
                pre[k].insert(temp);
            }
            if ( k < MAX ){
                string su (pala,k,MAX-k);
                suf[MAX-k].insert(su);
            }
        }
    }

    if(veri) return 0;
    cout << "ok" << endl;

    return 0;
}