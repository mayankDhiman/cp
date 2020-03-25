#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m, a, b; cin >> n >> m >> a >> b;

    if (float(a)/float(1) <= float(b)/float(m)){
        cout << n * a << "\n";
        return 0;
    }
    else
    {
        int rr = (n/m)*b;
        rr += min((n%m)*a, b);
        cout << rr << "\n";
        return 0;
    }
    

}
