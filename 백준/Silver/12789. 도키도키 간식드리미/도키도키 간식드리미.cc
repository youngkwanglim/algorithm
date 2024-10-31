#include<bits/stdc++.h>
using namespace std;
int n, a, cnt = 1;
stack<int> st;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(cnt == a) cnt++;
        else st.push(a);
        while(st.size() && st.top() == cnt){
            st.pop();
            cnt++;
        }        
    }
    if(st.empty()) cout << "Nice\n";
    else cout << "Sad\n";
}
