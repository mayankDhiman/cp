#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct FenwickTree {
    vector<ll> bit;
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0ll);
    }

    FenwickTree(vector<ll> a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
           modify(i, a[i]);
    }

    ll get(int r) {
        ll ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret ^= bit[r];
        return ret;
    }

    ll get(int l, int r) {
        return get(r) ^ get(l - 1);
    }

    void modify(int idx, ll delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] ^= delta;
    }
};


int main(){
    int N, Q;
    cin >> N >> Q;
    vector < ll > A(N);
    for (auto& a : A)
        cin >> a;
    FenwickTree fenwick(A);
    while (Q--){
        ll T, X, Y;
        cin >> T >> X >> Y;
        if (T == 1){
            fenwick.modify(X - 1, Y);
        }else{
            cout << fenwick.get(X - 1, Y - 1) << "\n";
        }
    } 
}
