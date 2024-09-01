#include<bits/stdc++.h>
using namespace std;
int n, m, cnt, k;
vector<int> num;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 재료 갯수 입력, 재료들의 합이 될 것 입력
    cin >> n >> m;
    // 재료들 고유번호 입력
    // 입력해서 절반만 계산하면 됨. 정렬한 뒤에 m - 입력값이 존재하는지 구해서 카운트 하면됨.
    for (int i = 0; i < n; i++){
        cin >> k;
        num.push_back(k);
    }
    sort(num.begin(), num.end());

    // cout << "사이즈는" << num.size() << '\n';
    // cout << num[0] << " " << num[1] << " " << num[2] << " " << m - num[0] << " " << m - num[1]<< " " << m - num[2]<<'\n';
    for (int i = 0; i < n; i++){
        auto a = find(num.begin(), num.end(), m - num[i]);
        if (a != num.end() && num[i] < m - num[i]) cnt++;
    }


    // if(num.size() % 2 == 0){
    //     for (int i = 0; i <= n / 2 - 1; i++){
    //         auto a = find(num.begin(), num.end(), m - num[i]);
    //         if (a != num.end()) cnt++;
    //     }
    // } else{
    //     for (int i = 0; i <= n / 2; i++) {
    //         auto a = find(num.begin(), num.end(), m - num[i]);
    //         if (a != num.end()) cnt++;
    //     }
    // }

    cout << cnt << '\n';

    return 0;
}