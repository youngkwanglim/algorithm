#include<bits/stdc++.h>
using namespace std;
int n, ret, cnt, d[200004];
string s;
stack<int> st;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if (s[i] == '(') st.push(i);
        else if(st.size()){
            d[i] = d[st.top()] = 1;
            st.pop();
        }
    }

    for(int i = 0; i < n; i++){
        if(d[i]){
            cnt++;
            ret = max(ret, cnt);
        }
        else{
            cnt = 0;
        }
    }

    cout << ret << '\n';
}