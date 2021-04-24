#define _CRT_SECURE_NO_WARNINGS 1


#include <bits/stdc++.h>
using namespace std;

const int N = 30;
typedef long long LL;
int n, m;

struct node
{
	int a;
	int b;
	//bool operator < (const node &w)const{ return b>w.b; }
}q[N];
bool cmp(node a, node b)
{
	return a.b > b.b;

}
int main()
{
	cin >> n >> m;
	while (cin >> n >> m)
	{
		LL res = 0;
		for (int i = 0; i < m; i++) cin >> q[i].a >> q[i].b;
		sort(q, q + m, cmp);
		for (int i = 0; i < m; i++)
		{
			if (n >= q[i].a)
			{
				res += q[i].a*q[i].b;
				n -= q[i].a;
			}
			else
			{
				res += n*q[i].b;
				break;
			}
		}
		cout << res << endl;
	}
	return 0;
}