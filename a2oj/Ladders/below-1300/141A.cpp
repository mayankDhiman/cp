using namespace std;

#include <bits/stdc++.h>
int main()
{
	map <char, int> count1, count2;
	string s1, s2, s3; cin >> s1 >> s2 >> s3;
	for (int i = 0; i < s1.size(); i ++) count1[s1[i]] += 1;
	for (int i = 0; i < s2.size(); i ++) count1[s2[i]] += 1;
	for (int i = 0; i < s3.size(); i ++) count2[s3[i]] += 1;
	if (count1.size() == count2.size() && equal(count1.begin(), count1.end(), count2.begin(),
	 	[](auto x, auto y) {return x.first == y.first && x.second == y.second;}))			
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}