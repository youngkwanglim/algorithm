#include<bits/stdc++.h>
using namespace std;
string p, s;
int t, n, error, rev;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--){
        deque<int> d;
        cin >> p >> n >> s; // [1,2,3,4]
        int x = 0;
        for(char c : s){
            if(c == '[' || c == ']') continue;
            if(c >= '0' && c <= '9') x = x * 10 + c - '0';
            else{
                d.push_back(x);
                x = 0;
            }
        }
        if(x > 0) d.push_back(x);

        error = 0; rev = 0;
        for(char c : p){
            if(c == 'R') rev = !rev;
            else{
                if(d.empty()){
                    error = 1;
                    break;
                }
                if(rev) d.pop_back();
                else d.pop_front();
            }
        }
        if(error) cout << "error" << '\n';
        else{
            cout << "[";
            if(rev) reverse(d.begin(), d.end());
            for(int i = 0; i < d.size(); i++){
                cout << d[i];
                if(i != d.size() - 1) cout << ",";
            }
            cout << "]\n";            
        }
    }
}