#include <bits/stdc++.h>
using namespace std;

int solve(const vector <int> A, const vector <int> B)
{
    int n = A.size();
    for (int i = 0; i < n; i ++)
    {
        int net = 0;
        bool ok1 = 1, ok2 = 1;
        int j;
        for (j = i; j < n; j ++)
        {
            net += A[j];
            if (net < B[j]){
                ok1 = 0;
                break;
            }
            net -= B[j];
        }
        if (ok1)
        {
            for (j = 0; j < i; j ++)
            {
                net += A[j];
                if (net < B[j]){
                    ok2 = 0;
                    break;
                }
                net -= B[j];
            }
        }
        if (ok1 && ok2){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;  cin >> n;
    vector <int> A, B;
    for (int i = 0; i < n; i ++){
        int x;  cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < n; i ++){
        int x;  cin >> x;
        B.push_back(x);
    }

    int res = solve(A, B);
    cout << res << "\n";
}