#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	while(true){
		getline(cin, s);
		if (s == ".") break;
		stack<char> stk;
		for(char c : s){
			if(c == '[' || c == '(') stk.push(c);
			else if(c == ']' && stk.size() && stk.top() == '['){
				stk.pop();
			}
			else if(c == ')' && stk.size() && stk.top() == '('){
				stk.pop();
			}
			else if(c == ']' || c == ')') stk.push(c);
		}
		if(stk.size()) cout << "no" << '\n';
		else cout << "yes" << '\n';
	}
}