#include<bits/stdc++.h>
using namespace std;
int a, b[204], c;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> c; 
        b[c + 100]++;
    }
    cin >> c;
    cout << b[c + 100];
}