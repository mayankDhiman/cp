#include <bits/stdc++.h>
using namespace std;

bool check(int m, int s)
{
    if (s >= 0 && s <= 9*m)
        return true;
    return false;
}

int main()
{
    int m, s;   cin >> m >> s;  int s2 = s;
    string res1, res2;
    for (int i = 0; i < m; i ++)
    {
        for (int dd = 0; dd < 10; dd ++)
        {
            if ( (i > 0 || dd > 0 || (m == 1 && dd == 0))
                && check(m - i - 1, s - dd))
            {
                res1 += '0' + dd;
                s -= dd;
                break;
            }
        }
        for (int dd = 9; dd >= 0; dd --)
        {
            if ( (i > 0 || dd > 0 || (m == 1 && dd == 0))
                && check(m - i - 1, s2 - dd))
            {
                res2 += '0' + dd;
                s2 -= dd;
                break;
            }
        }
    }
    if ((int)res1.size() == m && (int)res2.size() == m)
    {
        cout << res1 << " " << res2 << '\n';
    }
    else{
        cout << "-1 -1\n";
    }
}