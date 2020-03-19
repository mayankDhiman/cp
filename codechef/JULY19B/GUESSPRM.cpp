// 1 ----> 1
// 2 ----> 0 or 1 or 4

// if (0)  -----> print(2)
// if (1) ------> print(3)
// else --------> 7

// (x1^2)%P = a1
// (x2^2)%P = a2  

// 7%2 = 1


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll T;   cin >> T;
    while(T--)
    {
        ll resp1, resp2;
        cout << "1 1\n";
        cin >> resp1;
        if (resp1 == -1){
            return 0;
        }
        cout << "1 2\n";
        cin >> resp2;
        if (resp2 == -1){
            return 0;
        }
        else if (resp2 == 0){
            cout << "2 2\n";
            continue;
        }
        else if (resp2 == 1){
            cout << "2 3\n";
            continue;
        }
        else{
            cout << "2 7\n";
            continue;
        }
    }
}