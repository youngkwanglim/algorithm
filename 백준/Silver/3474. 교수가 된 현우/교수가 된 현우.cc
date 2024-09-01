#include<bits/stdc++.h>
using namespace std;
int n, m, cnt;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		cnt = 0;
		for(int j = 5; j <= m; j *= 5){
			cnt += m / j; 
		}
		cout << cnt << '\n';
	}
}