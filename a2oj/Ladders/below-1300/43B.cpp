using namespace std;
#include <bits/stdc++.h>
int main()
{
	string s1, s2;
	getline(cin, s1);	getline(cin, s2);
	int c1[100], c2[100];
	for (int i = 0; i < 100; i++)	c1[i] = c2[i] = 0;
	for (int i = 0; i < s1.size(); i++)	c1[s1[i] - 65] += 1;
	for (int i = 0; i < s2.size(); i++)	c2[s2[i] - 65] += 1;

	// for (int i = 0; i < 58; i++)
	// {
	// 	cout <<  char(i + 65) << "\t" << c1[i] << "\t" << c2[i] << endl;
	// }

	for (int i = 0; i < 100; i++)
 	{
 		if (c1[i] < c2[i])
 		{
 			cout << "NO" << endl;
 			return 0;
 		}
 	}
 	cout << "YES" << endl;
	 	

}