#include <bits/stdc++.h>
using namespace std;

#define ll long long

int N, M, A[1001], B[1001], cache[1001][1001];

int dp(int i, int j){
    if (j == M)
        return (N - i);
    if (i == N)
        return (M - j);
    if (cache[i][j] != -1)
        return cache[i][j];
    return cache[i][j] =  min({1 + dp(i + 1, j), (A[i] != B[j]) +  dp(i + 1, j + 1), 1 + dp(i, j + 1)});
}

int main(){
    cin >> N >> M;
    for (int i = 0; i < N; i ++)
        cin >> A[i];
    for (int j = 0; j < M; j ++)
        cin >> B[j];
    memset(cache, -1, sizeof cache);
    cout << dp(0, 0) << "\n"; 
}
