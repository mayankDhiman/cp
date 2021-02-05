#include <bits/stdc++.h>
using namespace std;

int N, A[100001];

int main(){
    cin >> N;
    for (int i = 0; i < N; i ++)
        cin >> A[i];
    stack <int> stk;
    vector <int> left(N), right(N);
    for (int i = 0; i < N; i ++){
        while (stk.empty() == 0 && A[stk.top()] >= A[i])
            stk.pop();
        left[i] = (stk.empty() ? 0 : stk.top() + 1);
        stk.push(i);
    }
    while (stk.empty() == 0)
        stk.pop();
    for (int i = N - 1; i >= 0; i --){
        while (stk.empty() == 0 && A[stk.top()] >= A[i])
            stk.pop();
        right[i] = (stk.empty() ? N - 1 : stk.top() - 1);
        stk.push(i);
    }
    long long result = 0;
    for (int i = 0; i < N; i ++){
        long long range = (right[i] - left[i] + 1), foo = A[i];
        result = max(result, range * foo);
    }
    cout << result << "\n";
}

