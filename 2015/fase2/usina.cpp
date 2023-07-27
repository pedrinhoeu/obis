#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, e, p, m, a;
    cin >> n >> e >> p >> m;
    vector<long long> nums(n), pes(n+1, false);
    vector<vector<long long>> esq(m, vector<long long>(3, 0));
    for (int i = 0; i < n; i++){
        cin >> a;
        pes[a] = true;
    }
    for (int i = 0; i < e; i++){
        cin >> esq[i][0] >>;
    }
    int comec=0, fim=0;
    for(int i = 0; i < m; i++){
        comec = ops[i] - nums[ops[i]-1]-1;
        fim = ops[i] + nums[ops[i]-1]-1;
        for (int j = max(comec, 0); j <= min(fim, n-1); j++){
            if(nums[j] > 0){
                resp -= 1;
                nums[j] -= 1;
            }
        }
    }
    cout << resp << "\n";
}