#include<bits/stdc++.h>
using namespace std;

int n, l, r, a[104][104], visited[104][104], ret, sum;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
vector<pair<int, int>> v; 

void changeArea(){
    for(pair<int, int> p : v){
        a[p.first][p.second] = sum / v.size();
    }
}

void dfs(int y, int x){
    visited[y][x] = 1;
    v.push_back({y, x});
    sum += a[y][x];
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= n || visited[ny][nx]) continue;
        if(abs(a[ny][nx] - a[y][x]) >= l && abs(a[ny][nx] - a[y][x]) <= r){
            dfs(ny, nx);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> l >> r;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    while(true){
        fill(&visited[0][0], &visited[0][0] + 104*104, 0);  // visited 배열 초기화
        int flag = 0;  // 변경 발생 여부 확인
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!visited[i][j]){
                    v.clear();
                    sum = 0;
                    dfs(i, j);
                    if(v.size() > 1){  // 2개 이상의 칸이 연결되었을 때만 변경
                        changeArea();
                        flag = 1;
                    }
                }
            }
        }
        if(!flag) {  // 변경이 없으면 종료
            cout << ret << '\n';
            break;
        }
        ret++;
    }
}
