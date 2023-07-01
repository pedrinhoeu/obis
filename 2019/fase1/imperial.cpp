#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n), posi(501, -1);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(posi[nums[i]] == -1){
            posi[nums[i]] = i;
        }
    }
    int resp=1, possi, alt=1;
    for (int i = 1; i <= 500; i++){
        if(posi[i] != -1){
            for (int j = 1; j <= 500; j++){
                if(posi[j] != -1){
                    if(i != j){ 
                        possi = 0;
                        for (int k = posi[i]; k < n; k++){
                            if(alt == 1){
                                if(nums[k] == i){
                                    possi += 1;
                                }
                                alt = 0;
                            }
                            else{
                                if(nums[k] == j){
                                    possi += 1;
                                }
                                alt = 1;
                            }
                        }
                        if(resp < possi){
                            resp = possi;
                        }
                    }
                }
                
            }
        }
        
    }
    cout << resp << endl;
}