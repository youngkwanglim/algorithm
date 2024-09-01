#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		cin >> s;
		for(char c : s){
			for(int k = 0; k < m; k++){
				cout << c;
			}
		}
		cout << '\n';
	}
}