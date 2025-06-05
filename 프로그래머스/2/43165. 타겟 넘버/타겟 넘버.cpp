#include <bits/stdc++.h>
using namespace std;

int go(int i, vector<int> numbers, int target, int tmp){
    int midret = 0;
    if(i == numbers.size()){
        if(tmp == target) return 1;
        else return 0;
    }
    midret += go(i + 1, numbers, target, tmp + numbers[i]);
    midret += go(i + 1, numbers, target, tmp - numbers[i]);    
    return midret;
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    //for(int i = 0; i < numbers.size(); i++){
    answer += go(0, numbers, target, 0);
    //}
    
    
    return answer;
}