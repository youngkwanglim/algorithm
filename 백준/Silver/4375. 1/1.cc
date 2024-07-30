#include<bits/stdc++.h>
using namespace std;
int n, ret, cnt;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	while(cin >> n){
		ret = cnt = 1;
		while(true){
			if (cnt % n == 0){
				cout << ret << '\n';
				break;
			}
			cnt = 10 * cnt + 1;
			cnt %= n;
			ret++;
		}
	}
	return 0;
}