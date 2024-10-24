#include<bits/stdc++.h>
using namespace std;
int a, b, c;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    if(a == 60 && b == 60 && c == 60) cout << "Equilateral\n";
    else if(a + b + c == 180 && a != b && b != c && c != a) cout << "Scalene\n";
    else if(a + b + c != 180) cout << "Error\n";
    else cout << "Isosceles\n";
}