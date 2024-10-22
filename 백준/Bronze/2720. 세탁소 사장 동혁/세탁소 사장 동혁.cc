#include<bits/stdc++.h>
using namespace std;
int n, a, b, c, d, m;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> m;
        a = m / 25;
        m %= 25;
        b = m / 10;
        m %= 10;
        c = m / 5;
        m %= 5;
        d = m;
        cout << a << " " << b << " " << c << " " << d << '\n';
    }
}