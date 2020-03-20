#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, x, b, y;  cin >> n >> a >> x >> b >> y;
    vector <int> aa(n + 1, -1), bb(n + 1, -1);
    int t1 = 0;
    while(1){
        aa[a] = t1;
        t1 += 1;
        if (a == x)
            break;
        if (a < n)
            a += 1;
        else{
            a = 1;
        }
    }
    int t3 = 0;
    while(1){
        bb[b] = t3;
        t3 += 1;
        if (b == y)
            break;
        if (b > 1)
            b -= 1;
        else{
            b = n;
        }

    }
    // for (auto i : aa){
    //     cout << i << " ";
    // }
    // cout << "\n";
    // for (auto i : bb){
    //     cout << i << " ";
    // }
    // cout << "\n";

    for (int i = 0; i < n + 1; i ++){
        if (aa[i] == bb[i] && aa[i] != -1){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}