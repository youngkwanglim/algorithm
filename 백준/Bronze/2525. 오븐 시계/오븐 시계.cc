#include <bits/stdc++.h>
using namespace std;
int a, b, c, tmp1, tmp2;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    tmp1 = c / 60;
    tmp2 = c % 60;
    if(b + tmp2 >= 60){
        if(a + 1 + tmp1 >= 24) a = a + 1 + tmp1 - 24;
        else a = a + 1 + tmp1;
        b = b + tmp2 - 60;
    }
    else{
        if(a + tmp1 >= 24) a = a + tmp1 - 24;
        else a = a + tmp1;
        b = b + tmp2;
    }
    cout << a << " " << b;
}