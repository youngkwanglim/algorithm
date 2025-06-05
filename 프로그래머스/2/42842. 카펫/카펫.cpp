#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> ret;
    
    int hap = brown + yellow;
    for(int i = brown; i > 0; i--){
        if(hap % i == 0){
            int tmp = hap / i;
            if(i * 2 + tmp * 2 - 4 == brown){
                ret.push_back(i);
                ret.push_back(tmp);
                break;
            }
        }
    }
    
    return ret;
}