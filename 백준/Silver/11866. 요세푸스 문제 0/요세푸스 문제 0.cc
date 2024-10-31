#include<bits/stdc++.h>
using namespace std;
int n, k, visited[1004], cnt;
queue<int> q;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        q.push(i);
    }
    int i = 1;
    cout << "<";
    while(q.size() > 1){
        if(i % k ==0){
            cout << q.front();
            q.pop();
            cout <<", ";
        }
        else{
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        i++;
    }
    cout << q.front();
    cout << ">\n";
}