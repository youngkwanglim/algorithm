#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> phone_book) {
    // for(string s : phone_book){
    //     if(phone_book.find(s) == phone_book.end()) continue;
    //     else{
    //         return false;
    //     }
    // }
    // return true;
    
    sort(phone_book.begin(), phone_book.end());
    for(int i = 0; i < phone_book.size() - 1; i++){
        if(phone_book[i + 1] > phone_book[i]){
            if(phone_book[i + 1].substr(0, phone_book[i].size()) == phone_book[i]){
                return false;
            }
        }
    }
    return true;
}