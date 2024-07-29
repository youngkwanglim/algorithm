#include<bits/stdc++.h>
using namespace std;
int n, ret, cnt;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// 2와 5로 안떨어지는 정수 최소 1, 최대 10000
	// 각 자리수 모두 1로만 이루어져있음
	// N의 배수 중 가장 작은 수의 자리수 출력
	while(cin >> n){
		ret = 1;
		cnt = 1;
		while(true){
			if (ret % n == 0) {
				cout << cnt << '\n'; 
				break;
			}
			ret = 1 + ret * 10;
			ret %= n;
			cnt++;
		}
	}
	return 0;
}