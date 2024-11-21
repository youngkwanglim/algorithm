#include<bits/stdc++.h>
using namespace std;
int n, a[24][24], total, ret = 987654321, visited[24];
vector<int> v;

void go(){
    int tmp = 0;
    fill(visited, visited + 24, 0);
    for(int i = 0; i < n / 2; i++){
        for(int j = i + 1; j < n / 2; j++){
            tmp += a[v[i]][v[j]];
            tmp += a[v[j]][v[i]];
        }
    }

    int tmp2 = 0;
    vector<int> v2;
    for(int i = 0; i < n; i++){
        if(find(v.begin(), v.end(), i) == v.end()){
            v2.push_back(i);
        }
    }
    for(int i = 0; i < n / 2; i++){
        for(int j = i + 1; j < n / 2; j++){
            tmp2 += a[v2[i]][v2[j]];
            tmp2 += a[v2[j]][v2[i]];
        }
    }
    //cout << tmp << '\n';
    ret = min(ret, abs(tmp2 - tmp));
}

void combi(int start){
    //cout << "11" << '\n';
    if(v.size() == n / 2){
        go();
        return;
    }
    for(int i = start + 1; i < n; i++){
        v.push_back(i);
        combi(i);
        v.pop_back();
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //n 짝수 4 ~ 20 -> 2 ~10명이서 한팀
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            total += a[i][j];
        }
    }

    // 조합으로 가능한 경우에 수 다 뽑아서 더하고 최소값 업데이트 해주면 될듯
    combi(-1);

    cout << ret << '\n';
}