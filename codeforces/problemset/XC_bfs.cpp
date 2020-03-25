#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N = 20000;
vector <int> moves(N, 0);


ll bfs(ll n, ll m)
{
    queue <ll> q;
    q.push(n);
    moves[n] = 1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        if (u == m){
            return moves[u] - 1;
        }

        int v = u - 1;
        if (v > 0 && moves[v] == 0){
            moves[v] = moves[u] + 1;
            q.push(v);
        }
        v = u * 2;
        if (v < 2 * 1e4 + 1 && moves[v] == 0){
            moves[v] = moves[u] + 1;
            q.push(v);
        }
    }
}

int main()
{
    ll n, m;    cin >> n >> m;
    cout << bfs(n, m) << "\n";
}