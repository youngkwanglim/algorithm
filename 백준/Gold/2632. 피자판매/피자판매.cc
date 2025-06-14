#include<bits/stdc++.h>
using namespace std;
int want, m, n, tmp, ret;
int a[1004], b[1004];
//vector<int> a, b;
int psum_a[2004], psum_b[2004];
map<int, int> aCnt, bCnt;
void make(int n, int psum[], map<int, int>& mp){
	for(int interval = 1; interval <= n; interval++){
		for(int start = interval; start <= n + interval - 1; start++){
			int sum = psum[start] - psum[start - interval];
			mp[sum]++;
			if(interval == n) break;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> want >> m >> n;
	for(int i = 1; i <= m; i++){
		cin >> a[i];
		psum_a[i] = psum_a[i - 1] + a[i];
	}
	for(int i = m + 1; i <= 2 * m; i++) psum_a[i] = psum_a[i - 1] + a[i - m];
	for(int i = 1; i <= n; i++){
		cin >> b[i];
		psum_b[i] = psum_b[i - 1] + b[i];
	}
	for(int i = n + 1; i <= 2 * n; i++) psum_b[i] = psum_b[i - 1] + b[i - n];
	
	make(m, psum_a, aCnt);
	make(n, psum_b, bCnt);

	ret = aCnt[want] + bCnt[want];
	for(int i = 1; i < want; i++){
		ret += aCnt[i] * bCnt[want - i];
	}
	cout << ret << '\n';
}