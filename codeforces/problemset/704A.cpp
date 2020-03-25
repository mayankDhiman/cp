#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;   cin >> n >> q;
    vector< queue < int > >    e(n);
    queue < pair <int, int> > nn;

    int ans = 0, idx = 0;
    vector <bool> mm(q, false);
    while (q --)
    {
        int t, x;   cin >> t >> x;  x -= 1;
        if (t == 1)
        {
            ans += 1;
            idx += 1;
            nn.push(make_pair(idx, x));
            e[x].push(idx);
        }
        else if (t == 2)
        {
            ans -= e[x].size();
            while(!e[x].empty())
            {
                mm[e[x].front()] = true;
                e[x].pop();
            }
        }
        else if (t == 3)
        {
            while(!nn.empty() && nn.front().first <= x)
            {
                int i = nn.front().first;
                int xx = nn.front().second;
                nn.pop();
                if (mm[i] == false)
                {
                    e[xx].pop();
                    ans -= 1;
                    mm[i] = true;
                }   
            }
        }
        cout << ans << "\n";
    }
}