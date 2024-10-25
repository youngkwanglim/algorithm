#include<bits/stdc++.h>
using namespace std;
int n, m, ret = 2500;
char a[54][54];
string s1 = "BWBWBWBW", s2 = "WBWBWBWB";

int check(int y, int x){
    int tmp1 = 0;
    int tmp2 = 0;
    // 검정 돌
    //if(a[y][x] == 'B'){
        for(int i = 0; i < 8; i++){
            if(i % 2 == 0){
                for(int j = 0; j < 8; j++){
                    if(s1[j] != a[y + i][x + j]) tmp1++;
                }
            }
            else{
                for(int j = 0; j < 8; j++){
                    if(s2[j] != a[y + i][x + j]) tmp1++;
                }
            }
        }
    //}
    // 흰돌
    //else{
        for(int i = 0; i < 8; i++){
            if(i % 2 == 0){
                for(int j = 0; j < 8; j++){
                    if(s2[j] != a[y + i][x + j]) tmp2++;
                }
            }
            else{
                for(int j = 0; j < 8; j++){
                    if(s1[j] != a[y + i][x + j]) tmp2++;
                }
            }
        }
    //}
    return min(tmp1, tmp2);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n - 8 + 1; i++){
        for(int j = 0; j < m - 8 + 1; j++){
            ret = min(check(i,j), ret);
        }
    }

    cout << ret << '\n';
}