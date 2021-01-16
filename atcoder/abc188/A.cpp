#include <bits/stdc++.h>
using namespace std;

#define ll long long

int X, Y;

int main(){
    cin >> X >> Y;
    if (X > Y)
        swap(X, Y);
    cout << (X + 3 > Y ? "Yes" : "No") << "\n";
}

