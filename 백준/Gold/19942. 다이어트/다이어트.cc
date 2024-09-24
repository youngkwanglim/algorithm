#include<bits/stdc++.h>
using namespace std;
int n, ze[20][20], ret = 987654321, p, f, s, v, c;
vector<int> rett;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> p >> f >> s >> v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> ze[i][j];
        }
    }

    // 비트마스킹으로 출력
    for(int i = 0; i < (1 << n); i++){
        vector<int> vv;
        int np = 0, nf = 0, ns = 0, nv = 0, nc = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                vv.push_back(j);
                np += ze[j][0];
                nf += ze[j][1];
                ns += ze[j][2];
                nv += ze[j][3];
                nc += ze[j][4];
            }
        }
        if(np >= p && nf >= f && ns >= s && nv >= v){
            if(ret > nc || (ret == nc && vv < rett)){
                ret = nc;
                rett = vv;
            }
        }
    }

    if(ret == 987654321){
        cout << -1;
        return 0;
    }
    // 마지막에 +1씩 해서 출력해야됨.
    //sort(rett.begin(), rett.end());
    cout << ret << '\n';
    for(int i : rett){
        cout << i + 1 << " ";
    }
}