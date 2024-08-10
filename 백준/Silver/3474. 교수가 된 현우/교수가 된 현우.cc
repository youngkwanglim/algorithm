#include<bits/stdc++.h>
using namespace std;
int n, m, cnt2;
int go(int m){
    int cnt = 0;
    for (int i = 5; m / i >= 1; i *= 5) {
        cnt += m / i;
    }
    return cnt;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		cnt2 = go(m);
		cout << cnt2 << '\n';
	}
}