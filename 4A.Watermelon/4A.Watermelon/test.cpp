#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>
using namespace std;

int w;
int main()
{
	cin >> w;
	if (w % 2 == 0&&w!=2)
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}
	return 0;
}