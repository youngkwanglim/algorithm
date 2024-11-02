#include<bits/stdc++.h>
using namespace std;
int n, tmp, a;
deque<int> dq;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        switch(a){
            case 1:
                cin >> tmp;
                dq.push_front(tmp);
                break;
            case 2:
                cin >> tmp;
                dq.push_back(tmp);
                break;
            case 3:
                if(dq.size()) {cout << dq.front() << '\n'; dq.pop_front();}
                else cout << -1 << '\n';
                break;
            case 4:
                if(dq.size()) {cout << dq.back() << '\n'; dq.pop_back();}
                else cout << -1 << '\n';
                break;
            case 5:
                cout << dq.size() << '\n';
                break;
            case 6:
                if(dq.empty()) cout << 1 << '\n';
                else cout << 0 << '\n';
                break;
            case 7:
                if(dq.size()) cout << dq.front() << '\n';
                else cout << -1 << '\n';
                break;
            case 8:
                if(dq.size()) cout << dq.back() << '\n';
                else cout << -1 << '\n';
                break;
        }
    }
}