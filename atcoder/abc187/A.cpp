#include <bits/stdc++.h>
using namespace std;

#define ll long long

long long N, A[200001], B[200001];


int main(){
    vector < pair < long long, long long > >  foo;
    cin >> N;
    long long aok = 0, aok1 = 0;
    for (ll i = 0; i < N; i ++){
        cin >> A[i] >> B[i];
        long long incA = A[i] + B[i], incB = A[i];
        foo.push_back({incA, incB});
        aok += incB;
    }
    sort(foo.begin(), foo.end(), [&](auto l, auto r){
        return (l.first + l.second > r.first + r.second);
    });
    long long tat = 0;
    for (ll i = 0; i < N; i ++){
        tat += foo[i].first;
        aok -= foo[i].second;
        if (tat > aok){
            cout << i + 1 << "\n";
            exit(0);
        }
    }
}


