#include<bits/stdc++.h>
using namespace std;
deque<int> dq;
int n,m;
bool flag[100001];

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>flag[i];
    }
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(flag[i]==0)
        dq.push_back(x);
    }
    cin>>m;
    for(int i=0; i<m; i++){
        int y;
        cin>>y;
        dq.push_front(y);
        cout<<dq.back()<<" ";
        dq.pop_back();
        
    }
}