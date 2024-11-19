#include<bits/stdc++.h>
using namespace std;
int n, k, visited[104], cnt, a[104];
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 멀티탭 구멍 n, 전기용품 사용횟수 k
    cin >> n >> k; 
    for(int i = 0; i < k; i++){
        cin >> a[i];
    }
    for(int i = 0; i < k; i++){
        if(!visited[a[i]]) {
            if(v.size() == n){
                int last_idx = 0, pos = 0;
                for(int _a : v){
                    int here_pick = 987654321;
                        for(int j = i + 1; j < k; j++){
                            if(_a == a[j]){
                                here_pick = j; break;
                            }
                    }
                    if(last_idx < here_pick){
                        last_idx = here_pick;
                        pos = _a;
                    }
                }
                visited[pos] = 0;
                cnt++;
                v.erase(find(v.begin(), v.end(), pos));
            }
            v.push_back(a[i]);
            visited[a[i]] = 1;
        }
    }
    cout << cnt << '\n';
}