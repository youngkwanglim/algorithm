#include<bits/stdc++.h>

using namespace std;
string num;
int max_cnt,answer;

void dfs(int idx, int cnt) {
    if (cnt == max_cnt) {
        answer = max(answer, stoi(num));
        return;
    }
    for (int i = idx; i < num.length()-1; i++) {
        for (int j = i + 1; j < num.length(); j++) {
            if (num[i] <= num[j]) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i],num[j]);
            }
            // 무조건 바꾸어야하는 경우
            if (i == num.length() - 2 && j == num.length() - 1) {
                swap(num[i], num[j]);
                dfs(i, cnt + 1);
                swap(num[i], num[j]);
            }
        }
    }
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> num>> max_cnt;
        answer = 0;
        dfs(0, 0);
        cout << "#" << test_case << " " << answer << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}