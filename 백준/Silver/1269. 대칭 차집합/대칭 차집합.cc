#include<bits/stdc++.h>
using namespace std;
int n, m, a, cnt;
map<int, int> m1;
map<int, int> m2;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 공집합 아님
    // 차집합 원소 개수
    cin >> n >> m;
    while(n--){
        cin >> a;
        m1[a]++;
    }
    while(m--){
        cin >> a;
        if(m1.find(a) != m1.end()) cnt++;
        m2[a]++;
    }
    // cout << "cnt : " << cnt << '\n';
    cout << m1.size() + m2.size() - (2 * cnt) << '\n';
}