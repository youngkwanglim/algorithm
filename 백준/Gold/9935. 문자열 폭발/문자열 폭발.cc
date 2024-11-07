#include<bits/stdc++.h>
using namespace std;
string s1, s2, ret;
stack<char> st;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s1 >> s2;
    for(char a : s1){
        st.push(a);
        if(st.size() >= s2.size() && st.top() == s2[s2.size() - 1]){
            string s = "";
            for(char i : s2){
                s += st.top();
                st.pop();
            }
            reverse(s.begin(), s.end());
            if(s2 != s){
                for(char i : s){
                    st.push(i);
                }
            }
        }
    }
    if(!st.size()) cout << "FRULA" << '\n';
    else {
        while(st.size()){
            ret += st.top(); st.pop();
        }
        reverse(ret.begin(), ret.end());
        cout << ret << '\n';
    }
}   