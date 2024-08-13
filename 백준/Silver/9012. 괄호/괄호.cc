#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	for(int i = 0; i < t; i++){
		stack<char> stk;
		cin >> s;
		for(char c : s){
			if(stk.size() && stk.top() == '(' && c == ')'){
				stk.pop();
				continue;
			}
			else stk.push(c);
		}
		if(stk.size()) cout << "NO" << '\n';
		else cout << "YES" <<'\n';
	}
}