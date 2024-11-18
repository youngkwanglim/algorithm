#include<bits/stdc++.h>
using namespace std;
int n, start, e, ret, x, tmp;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    // 1 <= a <= 백만
    // 투포인터 하나는 맨앞 하나는 맨뒤에서 시작
    for(int i = 0; i < n ; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> x;

    sort(v.begin(), v.end());
    e = n - 1;
    // 1이랑 12가 맨끝
    while(true){
        if(start == e) break;

        if(v[start] + v[e] == x) {ret++; e--;}
        else if(v[start] + v[e] < x) start++;
        else e--;
    }
    cout << ret << '\n';
}