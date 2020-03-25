// 1   2   3   4   5
// 1   2   2   1   0

// 1   2   3   4   5   6
// 1   2   3   2   1   0

// 0   1   2   3   4   5   6   7
// 0   1   2   3   3   2   1   0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,  m;  cin >> n >> m;
    if (m == 0){
        cout << "1\n";
        return 0;
    }
    cout << min(n - m, m)  << "\n";
}