#include<bits/stdc++.h>
using namespace std;
int a[10][10], x = 1, y = 1, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> a[i][j];
            if(ret < a[i][j]){
                ret = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }
    cout << ret << '\n' << x << " " << y << '\n';
}