#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> citations) {
    for(int i = 1000; i >= 0; i--){
        int cnt = 0;
        for(int j = 0; j < citations.size(); j++){
            if(citations[j] >= i) cnt++;
        }
        if(cnt >= i) return i;
    }
    
    // n편 중 h번 이상 인용된 논문이 h편 이상, 나머지 h번 이하 인용
    return 0;
}