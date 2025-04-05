#include<bits/stdc++.h>
using namespace std;
int t, k, num, dir, visited[1004], ret;
char c[1004][8];

void rotate(int num, int dir){
    // 자기 자신 회전
    visited[num] = 1;
    char right = c[num][2];
    char left = c[num][6];

    if(dir == 1){ // 시계
        char tmp = c[num][7];
        for(int i = 6; i >= 0; i--){
            c[num][i + 1] = c[num][i];
        }
        c[num][0] = tmp;
    }
    else{ // 반시계
        char tmp = c[num][0];
        for(int i = 1; i <= 7; i++){
            c[num][i - 1] = c[num][i];
        }
        c[num][7] = tmp;
    }

    // cout << "==============\n"; 

    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < 8; j++){
    //         cout << c[i][j]; 
    //     }
    //     cout << '\n';
    // }

    // 오른쪽 회전
    if(num + 1 <= t - 1 && (right != c[num + 1][6]) && !visited[num + 1]) rotate(num + 1, -dir);
    // 왼쪽 회전
    if(num - 1 >= 0 && (left != c[num - 1][2]) && !visited[num - 1]) rotate(num - 1, -dir);

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 8; j++){
            cin >> c[i][j]; 
        }
    }
    
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> num >> dir;
        num -= 1;
        rotate(num, dir);

        // 방문 초기화 시켜야됨
        fill(visited, visited + 1004, 0);
    }

    for(int i = 0; i < t; i++){
        if(c[i][0] == '1') ret++;
    }
    cout << ret << '\n';
}