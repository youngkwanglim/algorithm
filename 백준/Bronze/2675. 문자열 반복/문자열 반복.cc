#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		cin >> s;
		for(int j = 0; j < s.length(); j++){
			for(int k = 0; k < m; k++){
				cout << s[j];
			}
		}
		cout << '\n';
	}
}