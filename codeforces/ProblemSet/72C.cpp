using namespace std;
#include <bits/stdc++.h>
int main(){
	int n, r1 = 0, r2 = 0;	cin >> n;

	for (int i = 1; i < n + 1; i++){
		if (!(n%i)){
			if (i%2){
				r1 += 1;
			}
			else{
				r2 += 1;
			}
		}
	}

	if (r1 == r2)	cout << "yes\n";
	else	cout << "no\n";
	
}