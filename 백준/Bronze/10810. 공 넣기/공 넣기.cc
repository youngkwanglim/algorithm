#include<bits/stdc++.h>
using namespace std;
int n, m, a[104], b, c, ball;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> b >> c >> ball;
        for(int j = b; j <= c; j++){
            a[j] = ball;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}