#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;       
    int res = 0, i = 1, s = 1;
    while (1)
    {
        n -= s;
        if (n < 0)
            break;
        res += 1;
        i += 1;
        s = (i * (i + 1))/2;
    }
    cout << res << "\n";
}