#include<bits/stdc++.h>
using namespace std;
const int MAX = 20;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
int r, c, visited[MAX + 4][MAX + 4], cnt[26], ret = -1;
char a[MAX + 4][MAX + 4];
void dfs(int y, int x, int dist){
    ret = max(dist, ret);
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= r || nx < 0 || nx >= c || visited[ny][nx]) continue;
        if(cnt[a[ny][nx] - 'A']) continue;
        //q.push({ny, nx});
        visited[ny][nx] = 1;
        cnt[a[ny][nx] - 'A']++;
        dfs(ny, nx, dist + 1);
        visited[ny][nx] = 0;
        cnt[a[ny][nx] - 'A']--;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    visited[0][0] = 1;
    cnt[a[0][0] - 'A']++;
    dfs(0, 0, 1);

    cout << ret << '\n';
}