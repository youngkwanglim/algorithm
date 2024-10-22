#include<bits/stdc++.h>
using namespace std;
int a[104][104];
int n, x, y, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                //cout << j << " : " << k << '\n';
                if(a[x + j][y + k] == 0){
                    a[x + j][y + k]++;
                    ret++;
                }
            }
        }
    }

    cout << ret << '\n';
}