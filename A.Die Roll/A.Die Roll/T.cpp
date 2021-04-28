#define _CRT_SECURE_NO_WARNIN 1

#include <bits/stdc++.h>
using namespace std;

int a, b;
int main()
{
	cin >> a >> b;
	int res = max(a, b);
	if (res == 1)cout << "1/1" << endl;
	if (res == 2)cout << "5/6" << endl;
	if (res == 3)cout << "2/3" << endl;
	if (res == 4)cout << "1/2" << endl;
	if (res == 5)cout << "1/3" << endl;
	if (res == 6)cout << "1/6" << endl;
	return 0;
}
//int y, m;
//
//int main()
//{
//	cin >> y >> m;
//	if (y == m)
//	{
//		cout << "1/1" << endl;
//		return 0;
//	}
//	else if (y + m == 4)
//	{
//		if ((y == 1 && m == 3) || (y == 3 && m == 1))
//		{
//			cout << "1/2" << endl;
//		}
//	}
//	else if (y + m == 6)
//	{
//		if ((y == 1 && m == 5) || (y == 5 && m == 1))
//		{
//			cout << "1/6" << endl;
//		}
//		else if ((y == 2 && m == 4) || (y == 4 && m == 2))
//		{
//			cout << "1/2" << endl;
//		}
//	}
//	else if (y + m == 3)
//	{
//		if ((y == 1 && m == 2) || (y == 2 && m == 1))
//		{
//			cout << "2/3" << endl;
//		}
//	}
//	else if (y + m == 5)
//	{
//		if ((y == 1 && m == 4) || (y == 4 && m == 1)||
//			(y == 2 && m == 3) || (y==3&&m==2))
//		{
//			cout << "1/3" << endl;
//		}
//	}
//	return 0; 
//}