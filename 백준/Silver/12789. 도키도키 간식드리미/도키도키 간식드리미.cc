#include<bits/stdc++.h>
using namespace std;
int n, a;
queue<int> q;
stack<int> st2;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        q.push(a);
    }
    for(int i = 1; i <= n; ){
        if(st2.size() && st2.top() == i){
            st2.pop();
            i++;
            continue;
        }
        else if(q.size() && q.front() == i){
            q.pop();
            i++;
            continue;
        }
        else if(q.size()){
                st2.push(q.front());
                q.pop();
        }
        else{
            break;
        }
    }
    if(q.empty() && st2.empty()) cout << "Nice\n";
    else cout << "Sad\n";
}
