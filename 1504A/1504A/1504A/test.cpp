#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;

int t;
string a;
int main()
{
	cin >> t;
	while (t--)
	{
		getline(cin, a);
		int n = a.size();
		int k;
		if (n & 1)k = n / 2 + 1;
		else k = n / 2;
		int flag = 0;
		for (int i = 0; i < k; i++)
		{
			if (a[i] != a[n - i - 1])
			{
				a.insert(i + 1, "a");
				puts("YES");
				cout << a << endl;
				flag = 1;
				break;
			}
			else if (a[i] != 'a')
			{
				a.insert(i, "a");
				cout << "YES" << endl;
				cout << a << endl;
				flag = 1;
				break;
			}
		}
		if (flag)
			continue;
		cout << "NO" << endl;
	}

	return 0;
}