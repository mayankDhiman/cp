#include <bits/stdc++.h>
using namespace std;

int N, A[61];
long long result = 0, cache[61][2];

long long rec(int i, int pre){
    if (i == N + 1)
        return (pre == 1);
    if (cache[i][pre] != -1)
        return cache[i][pre];    
    long long result = 0;
    for (int n = 0; n <= 1; n ++){
        if (A[i - 1] == 1){
            result += rec(i + 1, n & pre);
        }else{
            result += rec(i + 1, n | pre);
        }
    }
    return cache[i][pre] = result;
}

int main(){
    memset(cache, -1, sizeof cache);
    cin >> N;
    for (int i = 0; i < N; i ++){
        string x;
        cin >> x;
        A[i] = (x == "AND" ? 1 : 0);
    }
    cout << rec(1, 0) + rec(1, 1) << "\n";

}
