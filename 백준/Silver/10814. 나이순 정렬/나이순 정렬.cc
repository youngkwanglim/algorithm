#include<bits/stdc++.h>
using namespace std;
int n, age;
string name;

struct jj{
    int age, order;
    string name;
};

bool cmp(jj a, jj b){
    if(a.age == b.age) return a.order < b.order;
    return a.age < b.age;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    vector<jj> v;
    for(int i = 0; i < n; i++){
        cin >> age >> name;
        v.push_back({age, i, name});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto a : v){
        cout << a.age << " " << a.name << '\n';
    }
}