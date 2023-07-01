#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, resp=0;
    cin >> n;
    vector<int> nums;
    while(n--){
        cin >> a;
        if(a == 0){
            nums.pop_back();
        }
        else{
            nums.push_back(a);
        }
    }
    for (int i = 0; i < nums.size(); i++){
        resp += nums[i];
    }
    cout << resp << endl;
}