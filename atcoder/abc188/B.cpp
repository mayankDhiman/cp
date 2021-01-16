#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll N, A[100001], B[100001];
ll result;

int main(){
    cin >> N;
    result = 0;
    for (int i = 0; i < N; i ++)
        cin >> A[i];
    for (int i = 0; i < N; i ++)
        cin >> B[i];
    for (int i = 0; i < N; i ++)
        result += A[i] * B[i];
    cout << (result == 0 ? "Yes" : "No") << "\n";
}

