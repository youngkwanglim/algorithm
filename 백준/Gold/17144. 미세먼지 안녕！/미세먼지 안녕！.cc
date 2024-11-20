#include<bits/stdc++.h>
using namespace std;
int r,c,t,a[54][54], temp[54][54], ret;
vector<pair<int, int>> v1, v2;
int dy1[] = {0, -1, 0, 1};
int dx1[] = {1, 0, -1, 0};
int dy2[] = {0, 1, 0, -1};
int dx2[] = {1, 0, - 1, 0};
vector<pair<int, int>> chung(int sy, int sx, int dy[], int dx[]){
    vector<pair<int, int>> v;
    int cnt = 0;
    int y = sy;
    int x = sx;
    while(true){
        int ny = y + dy[cnt];
        int nx = x + dx[cnt];
        // if(ny == sy && nx == sx) break;
        if(ny < 0 || ny >= r || nx < 0 || nx >= c){
            cnt++;
            ny = y + dy[cnt];
            nx = x + dx[cnt];
        }
        if(ny == sy && nx == sx) break;
        y = ny; x = nx;
        v.push_back({ny, nx});
    }
    return v;
}

void mise_go(){
    fill(&temp[0][0], &temp[0][0] + 54*54, 0);
    queue<pair<int, int>> q; 
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] != -1 && a[i][j]) q.push({i,j});
        }
    }
    while(q.size()){
        int y, x;
        tie(y, x) = q.front(); q.pop();
        int spread = a[y][x] / 5;
        for(int i = 0; i < 4; i++){
            int ny = y + dy1[i];
            int nx = x + dx1[i];
            if(ny < 0 || ny >= r || nx < 0 || nx >= c || a[ny][nx] == -1) continue;
            temp[ny][nx] += spread;
            a[y][x] -= spread;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            a[i][j] += temp[i][j];
        }
    }
    return;
}

void go(vector<pair<int,int>> &v){
    for(int i = v.size() - 1; i > 0; i--){
        a[v[i].first][v[i].second] = a[v[i - 1].first][v[i - 1].second];
    }
    a[v[0].first][v[0].second] = 0;
    return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> r >> c >> t;
    bool flag = 1;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
            // 공기청정기의 행을 저장
            if(a[i][j] == -1) {
                if(flag){
                    v1 = chung(i,j,dy1,dx1);
                    flag = false;
                } else{
                    v2 = chung(i,j,dy2,dx2);
                }
            }
        }
    }
    while(t--){
        mise_go();
        go(v1);
        go(v2);
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] >= 1) ret += a[i][j];
        }
    }

    cout << ret << '\n';
}

// 30 -> 6   30 - 18 + 1 + 2 = 15
// 7 -> 1     7 - 2 + 6 = 11
// 10 -> 2    10 - 6 + 6 = 10 
// 20 -> 4     20 - 8 = 12