#include <bits/stdc++.h>
using namespace std;

#define ll long long

int N, M;

int main(){
    cin >> N >> M;
    vector < int > A(M);
    for (int i = 0; i < M; i ++)
        cin >> A[i];
    
    sort(A.begin(), A.end());
    int pre = 0;
    vector < int > patch;
    for (int i = 0; i < M; i ++){
        int p = A[i] - pre - 1;
        if (p > 0){
            patch.push_back(p);
        }
        pre = A[i];
    }
    if (N - pre > 0)
       patch.push_back(N - pre); 
   
    if (patch.size() == 0){
        cout << "0\n";
        return 0;
    }

    int k = *min_element(patch.begin(), patch.end());
    long long result = 0;
    for (auto p : patch){
        result += (p / k);
        result += (p % k != 0);
    }
    cout << result << "\n";
}

