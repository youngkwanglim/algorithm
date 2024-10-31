#include<bits/stdc++.h>
using namespace std;
string s;
int n;
queue<int> q;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> s;
        if(s == "push"){
            int tmp = 0;
            cin >> tmp;
            q.push(tmp);
        }
        else if(s == "pop"){
            if(q.size()){
                cout << q.front() << '\n';
                q.pop();
            }
            else{
                cout << -1 << '\n';
            }
        }
        else if(s == "size"){
            cout << q.size() << '\n';
        }
        else if(s == "empty"){
            if(q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(s == "front"){
            if(q.size()){
                cout << q.front() << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
        else if(s == "back"){
            if(q.size()){
                cout << q.back() << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
    }
}