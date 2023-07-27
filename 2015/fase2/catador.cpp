#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, resp = 0;
    cin >> n >> m;
    int nums[n], ops[m];
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        resp += nums[i];
    }
    for (int i = 0; i < m; i++){
        cin >> ops[i];
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