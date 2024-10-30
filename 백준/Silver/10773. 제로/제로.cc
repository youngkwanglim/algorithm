#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int n, m, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> m;
        if(m == 0){
            st.pop();
        }
        else{
            st.push(m);
        }
    }
    while(st.size()){
        ret += st.top();
        st.pop();
    }
    cout << ret << '\n';
}