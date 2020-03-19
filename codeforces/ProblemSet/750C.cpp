#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    int lb = INT_MIN, ub = INT_MAX, sm = 0; bool ex = 0;
    for (int i = 0; i < n; i ++){
        int t1, t2; cin >> t1 >> t2;
        if (t2 == 1){
            lb = max(lb, 1899 - sm);
        }
        else{
            ub = min(ub, 1900 - sm);
            ex = 1;
        }
        sm += t1;
    }
    if (!ex){
        cout << "Infinity\n";
        return 0;
    }
    if (lb >= ub - 1){
        cout << "Impossible\n";
        return 0;
    }
    cout << (ub - 1) + sm << "\n";
    return 0;
}