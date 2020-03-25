#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, res = 0;   cin >> n >> m;
    vector <string> a(n), aa(n);   for (int i = 0; i < n; i ++)    cin >> a[i];
    for (int i = 0; i < m; i ++)
    {
        for (int j = 0; j < n; j ++)
            aa[j] += a[j][i];
        vector <string> aas = aa;
        sort(aas.begin(), aas.end());
        if (aa != aas)
        {
            res += 1;
            for (int j = 0; j < n; j ++)
                aa[j].erase(aa[j].begin() + (aa[j].size() - 1));
        }   
    }
    cout << res << "\n";
}