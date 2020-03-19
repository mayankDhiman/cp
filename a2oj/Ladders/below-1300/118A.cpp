using namespace std;

#include <bits/stdc++.h>
int main()
{
	string t; cin >> t; 
	transform(t.begin(), t.end(), t.begin(), ::tolower);
	t.erase(remove(t.begin(), t.end(), 'a'), t.end());
	t.erase(remove(t.begin(), t.end(), 'y'), t.end());
	t.erase(remove(t.begin(), t.end(), 'o'), t.end());
	t.erase(remove(t.begin(), t.end(), 'e'), t.end());
	t.erase(remove(t.begin(), t.end(), 'u'), t.end());			
	t.erase(remove(t.begin(), t.end(), 'i'), t.end());			
	for (int i = 0; i < t.size(); i ++)
		if (i % 2 == 0)
			t.insert(i, ".");
	cout << t;	
	return 0;
}