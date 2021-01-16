#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    int N;
    cin >> N;
    vector < int > A(int(1 << N)), idx(int(1 << N));
    for (int i = 0; i < (1 << N); i ++)
        cin >> A[i], idx[i] = i;
    while (idx.size() != 2){
        vector < int > idx_;
        for (int i = 0; i < idx.size(); i += 2){
            if (A[idx[i]] > A[idx[i+1]]){
                idx_.push_back(idx[i]);
            }else{
                idx_.push_back(idx[i + 1]);
            }
        }
        idx = idx_;
    }
    if (A[idx[0]] > A[idx[1]]){
        cout << idx[1] + 1 << "\n"; 
    }else{
        cout << idx[0] + 1 << "\n";
    }
}

