#include <bits/stdc++.h>
using namespace std;

vector<int> solution(long long n) {
    vector<int> v;
    while(n != 0){
        int tmp = n % 10;
        v.push_back(tmp);
        n /= 10;
    }
    return v;
}