#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;	cin >> a >> b >> c;

	if (!(a == 1 or b == 1 or c == 1)){
		cout << a * b * c << "\n";
		return 0;
	}

	if (a == 1 && c == 1){
		cout << a + b + c << "\n";
		return 0;
	}

	if (a == 1 && b == 1){
		cout << c * 2 << "\n";
		return 0;
	}

	if (b == 1 && c == 1){
		cout << a * 2 << "\n";
		return 0;
	}

	if (a == 1){
		cout << (a + b) * c << "\n";
		return 0;
	}

	if (c == 1){
		cout << a * (b + c) << "\n";
		return 0;
	}

	if (b == 1){
		cout << max((1 + a) * c, (1 + c) * a) << "\n";
		return 0;
	}



}