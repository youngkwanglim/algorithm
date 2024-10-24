#include<bits/stdc++.h>
using namespace std;
int n, x, y, max_x = -10000, max_y = -10000, min_x = 10000, min_y = 10000;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> x >> y;
        max_x = max(x, max_x);
        min_x = min(x, min_x);
        max_y = max(y, max_y);
        min_y = min(y, min_y);
    }
    cout << (max_x - min_x) * (max_y - min_y) << '\n';
}