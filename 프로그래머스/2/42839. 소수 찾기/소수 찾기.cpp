#include <bits/stdc++.h>

using namespace std;

vector<int> v;
set<int> s;

bool check(int i){
    if(i == 0 || i == 1) return 0;
    if(i == 2) return 1;
    for(int j = 2; j * j <= i; j++){
        if(i % j == 0) return 0;
    }
    return 1;
}

int solution(string numbers) {
    int answer = 0;
    
    for(int i = 0; i < numbers.size(); i++){
        v.push_back(numbers[i] - '0');
    }
    
    sort(v.begin(), v.end());
    
    do{
        string num = "";
        for(int b : v){
            num += to_string(b);
            int n = stoi(num);
            s.insert(n);
        }
    }while(next_permutation(v.begin(), v.end()));
    
    for(int i : s){
        if(check(i)) answer++;
    }
    
    return answer;
}