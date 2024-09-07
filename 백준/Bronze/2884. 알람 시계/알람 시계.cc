#include <bits/stdc++.h>
using namespace std;
int a, b;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    if(b < 45){
        b = b + 60 - 45;
        if(a == 0) a = 23;
        else a -=1;
    }
    else{
        b -= 45;
    }
    cout << a << " " << b;
}