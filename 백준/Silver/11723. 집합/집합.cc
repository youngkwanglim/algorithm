#include<bits/stdc++.h>
using namespace std;
int n, tmp;
string s;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s == "add"){
            cin >> tmp;
            auto it = find(v.begin(), v.end(), tmp);
            if(it == v.end()){
                v.push_back(tmp);
            }
            else continue;
        }else if(s == "check"){
            cin >> tmp;
            auto it = find(v.begin(), v.end(), tmp);
            if(it == v.end()){
                cout << 0 << '\n';
            }
            else cout << 1 << '\n';   
        }else if(s == "remove"){
            cin >> tmp;
            auto it = find(v.begin(), v.end(), tmp);
            if(it == v.end()){
                continue;
            }
            else {
                v.erase(it);
            }          
        }else if(s == "toggle"){
            cin >> tmp;
            auto it = find(v.begin(), v.end(), tmp);
            if(it == v.end()){
                v.push_back(tmp);
            }
            else {
                v.erase(it);
            }   

        }else if(s == "all"){
            v.clear();
            for(int i = 1; i <= 20; i++){
                v.push_back(i);
            }
        }else if(s == "empty"){
            v.clear();
        }
    }
}