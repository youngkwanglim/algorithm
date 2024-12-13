#include<bits/stdc++.h>
using namespace std;
int n, a[24][24], ret;
struct Board{
    int a[24][24];
    void rotate90(){
        int tmp[24][24];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                tmp[i][j] = a[n - j - 1][i];
            }
        }
        copy(&tmp[0][0], &tmp[0][0] + 24*24, &a[0][0]);
    }
    void move(){
        int tmp[24][24];
        for(int i = 0; i < n; i++){
            int c = -1, d = 0;
            for(int j = 0; j < n; j++){
                if(a[i][j] == 0) continue;
                if(d && a[i][j] == tmp[i][c]) tmp[i][c] *= 2, d=0;
                else tmp[i][++c] = a[i][j], d = 1;
            }
            for(c++; c < n; c++) tmp[i][c] = 0;
        }
        copy(&tmp[0][0], &tmp[0][0] + 24*24, &a[0][0]);
    }
    void get_max(){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ret = max(ret, a[i][j]);
            }
        }
    }
};
void go(Board c, int here){
    if(here == 5){
        c.get_max();
        return;
    }
    for(int i = 0; i < 4; i++){
        Board d = c;
        d.move();
        go(d, here + 1);
        c.rotate90();
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    Board c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> c.a[i][j]; 
        }
    }
    go(c, 0);
    cout << ret << '\n';
}