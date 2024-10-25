#include<bits/stdc++.h>
using namespace std;
int n, m, a[104], dis = 300000, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                int tmp = a[i] + a[j] + a[k];
                if(tmp <= m && dis > m - tmp){
                    dis = m - tmp;
                    ret = tmp;
                }
            }
        } 
    }
    cout << ret << '\n';
}