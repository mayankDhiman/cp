#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int N, Cap, curr = 0;
    cin >> N >> Cap;
    Cap *= 100;
    for (int i = 1; i <= N; i ++){
        int A, B;
        cin >> A >> B;
        curr += (B * A);
        if (curr > Cap){
            cout << i << "\n";
            return 0;
        } 
    }
    cout << "-1\n";
}
