#define _CRT_SECURE_NO_WARNINGS 1

#include <bits/stdc++.h>

using namespace std;

const int N = 5e5 + 10, mod = 1e9 + 7;
typedef long long LL;

int n, m;
int f[N];
int a[N], l[N], r[N];
int cnt[N], cnt_post[N];
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		if (l[a[i]] == 0) l[a[i]] = i;
		r[a[i]] = i;
		cnt[a[i]]++;
	}
	for (int i = n; i >= 1; i--)
	{
		f[i] = f[i + 1];
		cnt_post[a[i]]++;
		if (i == l[a[i]])
		{
			f[i] = max(f[i], f[r[a[i]] + 1] + cnt[a[i]]);
		}
		else
		{
			f[i] = max(f[i], cnt_post[a[i]]);
		}
	}
	cout << n - f[1] << endl;
	return 0;
}