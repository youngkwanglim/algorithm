#include<bits/stdc++.h>
using namespace std;
int n, m, a[54][54], visited[54][54], ret1, ret2, ret3, cnt, cnt2;
const int dy[] = {0, -1, 0, 1};
const int dx[] = {-1, 0, 1, 0};
void go(int y, int x){
    ret2 = max(ret2, cnt);
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= m || nx < 0 || nx >= n || visited[ny][nx]) continue;
        if(((1 << i) & a[y][x]) == 0) {
            visited[ny][nx] = 1;
            cnt++;
            //cout << ny << " , " << nx << '\n'; 
            go(ny, nx);
        }
    }
}
void go2(int y, int x){
    ret3 = max(ret3, cnt2);
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= m || nx < 0 || nx >= n || visited[ny][nx]) continue;
        if(((1 << i) & a[y][x]) == 0) {
            visited[ny][nx] = 1;
            cnt2++;
            //cout << ny << " , " << nx << '\n'; 
            go2(ny, nx);
        }
    }
}
void mid(){
    fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]) {
                cnt2 = 1;
                visited[i][j] = 1;
                // cout << "===============" << '\n';
                go2(i, j);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]) {
                ret1++;
                cnt = 1;
                visited[i][j] = 1;
                // cout << "===============" << '\n';
                go(i, j);
            }
        }
    }

    for(int k = 0; k < 4; k++){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if((a[i][j] & (1 << k)) == (1 << k)){
                    a[i][j] &= ~(1 << k);
                    //ret3++;
                    //visited[i][j] = 1;
                    //go2(i, j);
                    mid();
                    a[i][j] |= (1 << k); 
                }
            }
        }
    }
    
    cout << ret1 << '\n' << ret2 << '\n' << ret3 << '\n';
}