#include<bits/stdc++.h>
using namespace std;
int n, a, b, tmp = 1;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> a >> b;
        tmp = 1;
        for(int i = 1; i <= b; i++){
            tmp = tmp * a % 10;
        }
        if(tmp == 0) cout << 10 << '\n';
        else cout << tmp << '\n';
    }
}