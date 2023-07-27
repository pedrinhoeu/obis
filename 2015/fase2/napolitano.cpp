#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char, int> dic;
    string pala;
    cin >> pala;
    dic['I'] = 1;
    dic['V'] = 5;
    dic['X'] = 10;
    dic['L'] = 50;
    dic['C'] = 100;
    dic['D'] = 500;
    dic['M'] = 1000;
    stack<pair<char, long long>> nums;
    long long resp = 0, som;
    for (int i = 0; i < pala.size(); i++){   
        som = 0;
        while(!nums.empty()){
            if(dic[pala[i]] > dic[nums.top().first]){
                som += nums.top().second;
                nums.pop();
            }
            else{
                break;
            }
        }
        nums.push({pala[i], dic[pala[i]]-som});
    }
    while(!nums.empty()){
        resp += nums.top().second;
        nums.pop();
    }
    cout << resp << endl;
}