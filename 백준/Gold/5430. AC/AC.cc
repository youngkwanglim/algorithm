#include<bits/stdc++.h>
using namespace std;
string p, s2, s;
int t, n, flag, error, rev;
//vector<string> num;
deque<string> d;
deque<string> split(string input, string delimiter) {
    deque<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while (end != string::npos) {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--){
        cin >> p >> n >> s; // [1,2,3,4]
        if(n == 0){
            d.clear();
        }
        else{
            s2 = s.substr(1, s.size() - 2); // 1,2,3,4
            d = split(s2, ","); // 1 2 3 4        
        }
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