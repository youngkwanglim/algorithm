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
		// 맨위에꺼가  다음꺼랑 세트만드는지  비교해보고 만들면 pop 
		for(char c : s){
			if(stk.size()){
				if (stk.top() == '(' && c == ')' ){
					stk.pop();
					continue;
				}
			}
			stk.push(c);
		}
		if(stk.size()) cout << "NO" << '\n';
		else cout << "YES" <<'\n';
	}
}