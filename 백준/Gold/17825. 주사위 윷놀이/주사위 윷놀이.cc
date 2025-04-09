#include<bits/stdc++.h>
using namespace std;
int num[10], ret, mem[104], mal[4], cnt;
vector<int> mp[104];

void add(int a, int b){
    mp[a].push_back(b);
}

void makeMap(){
    for(int i = 0; i <= 19; i++){
        add(i, i + 1);
        mem[i] = i * 2;
    }
    add(23, 22); add(22, 21); add(21, 20); add(20, 100);
    add(5,24); add(24,25); add(25,26); add(26, 23);
    add(15,29); add(29, 28); add(28,27); add(27, 23);
    add(10,31); add(31,30); add(30,23);

    mem[23] = 25; mem[22] = 30; mem[21] = 35; mem[20] = 40;
    mem[24] = 13; mem[25] = 16; mem[26] = 19;
    mem[27] = 26; mem[28] = 27; mem[29] = 28;
    mem[31] = 22; mem[30] = 24;
}
int move(int here, int cnt){
    if(here == 100) return 100;
    if(mp[here].size() >= 2){
        here = mp[here][1];
        cnt--;
    }
    if(cnt){
        queue<int> q;
        q.push(here);
        int there = 0;
        while(q.size()){
            int x = q.front(); q.pop();
            there = mp[x][0];
            if(there == 100) break;
            q.push(there);
            cnt--;
            if(cnt == 0) break;
        }
        return there;
    } else return here;
}

bool isMal(int mal_idx, int idx){
    if(mal_idx == 100) return false;
    for(int i = 0; i < 4; i++){
        if(i == idx) continue;
        if(mal[i] == mal_idx) return true;
    }
    return false;
}

int go(int here){
    if(here == 10) return 0;
    int ret = 0;
    for(int i = 0; i < 4; i++){
        int temp_idx = mal[i];
        int mal_idx = move(temp_idx, num[here]);
        if (isMal(mal_idx, i)) continue;
        mal[i] = mal_idx;
        ret = max(ret, go(here + 1) + mem[mal_idx]);
        mal[i] = temp_idx;            
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    for(int i = 0; i < 10; i++){
        cin >> num[i];
    }
    makeMap();
    cout << go(0) << '\n';
}