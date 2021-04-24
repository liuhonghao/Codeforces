#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

const int N = 110;
int n, m;
char a[N][N];
int main()
{
	bool ans = false;
	cin >> n >> m;
	char temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			temp = a[i][0];
			if (temp != a[i][j] || a[i][0] == a[i + 1][0])
			{
				ans = true;
				break;
			}
		}
		if (ans)
			break;
	}
	if (ans) puts("NO");
	else puts("YES");

	return 0;
}