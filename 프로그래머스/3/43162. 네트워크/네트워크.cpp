#include <bits/stdc++.h>
using namespace std;
int visited[204];

void go(int cur, int n, vector<vector<int>> computers){
    visited[cur] = 1;
    
    for(int next = 0; next < n; next++){
        if(!visited[next] && computers[cur][next] == 1){
            go(next, n, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {  
    int ret = 0;
    
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            go(i, n, computers);
            ret++;
        }
    }
    
    return ret;
}