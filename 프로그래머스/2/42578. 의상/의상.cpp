#include <bits/stdc++.h>
using namespace std;


int solution(vector<vector<string>> clothes) {
    map<string, int> mp;
    int tmp = 1;
    for(int i = 0; i < clothes.size(); i++){
        mp[clothes[i][1]]++;
    }
    if(mp.size() == 1) return mp[clothes[0][1]];
    else{
        for(auto it : mp){
            tmp *= (it.second + 1);
        }
        return tmp -1;
    }
    
    return tmp;
}