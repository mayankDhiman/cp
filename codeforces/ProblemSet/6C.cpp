// 2   9   8   2   7
// 0   2   11  19  21
// 26  17   9   7   0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    vector <int> a(n), aa(n), bb(n);  for (int i = 0; i < n; i ++)    cin >> a[i];

    int res1 = 0, res2 = 0;
    for (int i = 1; i < n; i++) aa[i] = aa[i - 1] + a[i - 1];
    for (int i = n - 2; i > -1; i --)   bb[i] = bb[i + 1] + a[i + 1];
    for (int i = 0; i < n; i ++)
    {
        if (aa[i] <= bb[i]){
            res1 += 1;
        }
        else{
            res2 += 1;
        }
    }
    cout << res1 << " " << res2 << '\n';
}