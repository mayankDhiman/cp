using namespace std;
#include <bits/stdc++.h>

char selDiff(char a, char b)
{
	char res; 
	string s = "RGB";
	for (int i = 0; i < 3; i++)
		if (s[i] != a && s[i] != b)
			return s[i];
}

char selDiffss(char a)
{
	char res;
	string s = "RGB";
	for (int i = 0; i < 3; i++)
		if (s[i] != a)
			return s[i];
}

int main()
{
	int n; cin >> n;
	string a; cin >> a;
	int res = 0;
	vector<char> v;
	char out = a[0];
	v.push_back(out);
	if (n == 1)
	{
		cout << 0 << endl;
		cout << a << endl;
		return 0;
	}
	for (int i = 1; i < a.size() - 1; i++)
	{
		if (a[i] == out)
		{	
			res += 1;
			char t = selDiff(out, a[i + 1]);
			v.push_back(t); 
			out = t;
		}
		else 
		{
			v.push_back(a[i]);
			out = a[i];
		}
	}

	if (out != a[a.size() - 1])
		v.push_back(a[a.size() - 1]);	
	else
	{
		v.push_back(selDiffss(out));
		res += 1;
	}

	cout << res << "\n";
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it;
	cout << "\n";
}