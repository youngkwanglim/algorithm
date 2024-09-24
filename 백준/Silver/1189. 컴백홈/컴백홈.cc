#include<bits/stdc++.h>
using namespace std;
int r, c, k, ret, visited[9][9];
char a[9][9];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
void go(int y, int x, int psum){
    if(y == 0 && x == c - 1 && psum == k){
        ret++;
        return;
    }
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
        if(visited[ny][nx]) continue;
        if(a[ny][nx] == 'T') continue;
        visited[ny][nx] = 1;
        //cout << ny << ", " << nx << '\n';
        go(ny, nx, psum + 1);
        visited[ny][nx] = 0;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> r >> c >> k;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    // 마지막에 도착했을 떄 k랑 거리가 같으면 ret을 증가시켜주면 됨.
    if(a[r - 1][0] == 'T' || a[0][c - 1] == 'T'){
        cout << 0;
        return 0;
    }
    visited[r - 1][0] = 1;
    go(r - 1, 0, 1);
    cout << ret;
}