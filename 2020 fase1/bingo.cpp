#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, k, a;
    cin >> n >> x >> k;
    vector<vector<int>> bings(n, vector<int>(k+1, 0));
    vector<int> nums(n, x);

    for (size_t i = 0; i < n; i++){
        for (int j = 0; j < x; j++){
            cin >> a;
            bings[i][a] = 1;
        }
    }
    vector<pair<int, int>> vencs(n, {0, 0});
    for(int i = 0; i < k; i++){
        cin >> a;
        for (int j = 0; j < n; j++){
            if(bings[j][a] == 1){
                nums[j] -= 1;
                if(nums[j] == 0){
                    vencs[j].first = i;
                    vencs[j].second = j;
                }
            }
        }
    }
    sort(vencs.begin(), vencs.end());
    int venc = vencs[0].first;
    for (int i = 0; i < n; i++){
        if(vencs[i].first == venc){
            cout << vencs[i].second+1 << " ";
        }
        else{
            break;
        }
    }
    cout << endl;
}