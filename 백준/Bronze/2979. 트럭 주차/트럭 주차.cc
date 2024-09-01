#include<bits/stdc++.h>
using namespace std;
int a, b, c, fir, sec, ret;
int cnt[101];
pair<int, int> ii;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    
    for (int i = 0; i < 3; i++){
        cin >> fir >> sec;
        for (int j = fir + 1; j <= sec; j++){
            cnt[j]++;
        }
    }

    for (int i = 1; i <= 100; i++){
        if(cnt[i] == 1){
            ret += a; 
        }
        else if (cnt[i] == 2){
            ret += 2 * b; 
        }
        else if (cnt[i] == 3){
            ret += 3 * c; 
        }     
    }

    cout << ret << '\n';

    return 0;
}