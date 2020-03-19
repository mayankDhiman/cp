#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;   cin >> n >> m;
    
    for (int i = 0; i < (n + 1)/2; i ++)
    {
        if (n%2 == 1 && i == n / 2)
        {
            for (int j = 0; j < (m + 1)/2; j ++)
            {
                cout << n/2 + 1 << " " << j + 1 << "\n";
                if (m - j != j + 1)
                    cout << n/2 + 1 << " " << m - j << "\n"; 
            }
            continue;
        }

        for (int j = 0; j < m; j ++)
        {
            cout << i + 1 << " " << j + 1 << "\n";
            cout << n - i << " " << m - j << "\n"; 
        }
    }

}