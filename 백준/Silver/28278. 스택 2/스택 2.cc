#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int n, m;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> m;
        if(m == 1){
            int tmp = 0;
            cin >> tmp;
            st.push(tmp);
        }
        else if(m == 2){
            if(st.size() != 0 && st.top()) {
                cout << st.top() << '\n'; 
                st.pop();
            }
            else cout << -1 << '\n';
        }
        else if(m == 3){
            cout << st.size() << '\n';
        }
        else if(m == 4){
            if(st.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else{
            if(st.size() != 0 && st.top()) {
                cout << st.top() << '\n'; 
            }
            else cout << -1 << '\n';
        }
    }
}