#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1e5 + 10;
int pai[N], peso[N];

int find(int x){
	if(pai[x]==x) return x;
	return pai[x]=find(pai[x]);
}
 
void join(int x, int y){
	x = find(x);
	y = find(y);

	if(x==y) return;
	
	if(peso[x]<peso[y]) pai[x]=y;
	if(peso[x]>peso[y]) pai[y]=x;
	
	if(peso[x]==peso[y]){
		pai[x]=y;
		peso[y]++;
	}
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
}