#include<bits/stdc++.h>
using namespace std;
int n;
string a, b;
map<string, int, greater<string>> mp;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(b == "enter"){
            mp.insert({a, 1});
        }
        else{
            mp.erase(a);
        }
    }
    for(auto it : mp){
        cout << it.first << '\n';
    }
}