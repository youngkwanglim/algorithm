#include <bits/stdc++.h>
using namespace std;
int a;
string s;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a;
    if(a >= 90) s = "A";
    else if(a >= 80) s = "B";
    else if(a >= 70) s = "C";
    else if(a >= 60) s = "D";
    else s = "F";
    cout << s << '\n';
}