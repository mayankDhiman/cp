using namespace std;
#include <bits/stdc++.h>
int main()
{
	string a;	cin >> a;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	for (auto c : a){
		if (c == 'a' or c == 'o' or c == 'y' or c == 'e' or c == 'u' or c == 'i')
			continue;
		else{
			cout << '.' << c;
		}
	}
}