#include <bits/stdc++.h>
using namespace std;

#define ll long long

string S;

int main(){
    cin >> S;
    cout << ( (S[1] == S[0] && S[1] == S[2] ) ? "Won" : "Lost") << "\n";
}

