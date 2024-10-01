#include<bits/stdc++.h>
using namespace std;
int n, m, ret;
char a[24][24];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
void dfs(int y, int x, int num, int step){
    ret = max(ret, step);
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
        int _next = (1 << (a[ny][nx] - 'A'));
        if((num & _next) == 0) dfs(ny, nx, num | _next, step + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    dfs(0, 0, 1 << (a[0][0] - 'A'), 1);
    cout << ret << '\n';
}