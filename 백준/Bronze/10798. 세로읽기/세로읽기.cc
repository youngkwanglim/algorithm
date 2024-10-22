#include<bits/stdc++.h>
using namespace std;
char a[5][15], tmp[15][5];
string s;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 5; i++){
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            a[i][j] = s[j];
        }
    }

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            tmp[i][j] = a[j][i];
        }
    }

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(tmp[i][j] == '\0') continue;
            cout << tmp[i][j];
        }
    }
    cout << '\n';
}