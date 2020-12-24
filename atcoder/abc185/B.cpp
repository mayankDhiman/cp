#include <bits/stdc++.h>
using namespace std;

#define ll long long

int N, M, T, charge;

int main(){
    cin >> N >> M >> T;
    charge = N;
    vector < pair < int, int > > A(M);
    for (int i = 0; i < M; i ++){
        int x, y;
        cin >> x >> y;
        A[i] = {x, y};
    }
    sort(A.begin(), A.end());
    bool ok = true;
    int pre = 0;
    for (auto a : A){
        N -= (a.first - pre) * 1;
        if (N <= 0){
            ok = false;
            break;
        }
        N += (a.second - a.first) * 1;
        N = min(charge, N);
        pre = a.second;
    }
    N -= (T - pre) * 1;
    if (N <= 0)
        ok = false;
    cout << (ok ? "Yes\n" : "No\n");
}

