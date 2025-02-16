#include<bits/stdc++.h>
using namespace std;
int n, m, k, a[54][54], b[54][54], r, c, s, tmp1, tmp2, ret = 987654321;
vector<int> v_idx;
struct A{
    int y, x, cnt;
};
vector<A> v;

void go(int r, int c, int s){
    if (s == 0) return;
    tmp1 = b[r - s][c + s];
    tmp2 = b[r + s][c - s];
    for(int i = c + s - 1; i >= c - s; i--){
        b[r - s][i + 1] = b[r - s][i];
    }
    for(int i = c - s + 1; i <= c + s; i++){
        b[r + s][i - 1] = b[r + s][i];
    }
    for(int i = r - s + 1; i <= r + s - 1; i++){
        b[i - 1][c - s] = b[i][c - s];
    }
    for(int i = r + s - 1; i >= r - s + 1; i--){
        b[i + 1][c + s] = b[i][c + s];
    }

    b[r - s + 1][c + s] = tmp1;
    b[r + s - 1][c - s] = tmp2;

    s--;
    go(r, c, s);
}

int solve(){
    for(int i : v_idx) go(v[i].y, v[i].x, v[i].cnt);
    int mn = 987654321;
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < m; j++){
            tmp += b[i][j];
        }
        mn = min(mn, tmp);
    }
    return mn;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < k; i++){
        cin >> r >> c >> s; r--; c--;
        v.push_back({r, c, s});
        v_idx.push_back(i);
    }

    do{
        memcpy(b, a, sizeof(b));
        ret = min(ret, solve());
    } while(next_permutation(v_idx.begin(), v_idx.end()));
    cout << ret << '\n';

}