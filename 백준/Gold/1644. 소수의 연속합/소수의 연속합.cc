#include<bits/stdc++.h>
using namespace std;
int n, ret;
vector<int> v;
bool go(int m){
    if(m == 0 || m == 1) return 0;
    if(m == 2) return 1;
    for(int i = 2; i * i <= m; i++){
        if(m % i == 0) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    if(n == 1){
        cout << 0 << '\n';
        return 0;
    }
    if(n == 2){
        cout << 1 << '\n';
        return 0;
    }
    for(int i = 1; i <= n; i++){
        if(go(i)) v.push_back(i);
    }
    // for(int i : v){
    //     cout << i << '\n';
    // }
    int size = 1;
    while(true){
        int flag = 0;
        for(int j = 0; j < v.size(); j++){
            int tmp = 0;
            for(int k = 0; k < size; k++){
                //cout << j + k << "번째" << v[j + k] << '\n';
                tmp += v[j + k];
                //cout << tmp << '\n';
            }
            if(j == 0 && tmp > n){
                flag = 1;
                break;
            }
            if(tmp == n) {
                ret++;
                break;
            }
            if(tmp > n) break;
        }
        size++;
        if(flag) break;
    }
    cout << ret << '\n';
}