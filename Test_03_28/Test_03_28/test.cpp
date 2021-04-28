#define _CRT_SECURE_NO_WARNINGS 1

//1A.Theatre Square

//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//ll n, m, a;
//
//int main()
//{
//	cin >> n >> m >> a;
//	printf("%lld\n", (ll)ceil((1.0)*n / a)*(ll)ceil((1.0)*m / a));
//	return 0;
//}

//1C. Ancient Berland Circus

//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int  Pi =3.1415926;
//double mod(double a, double b)//小数取模
//{
//	return a - (int)(a / b)*b;
//}
//double gcd(double x, double y)
//{
//	if (y <= 0.0001) return x;
//	return gcd(y, mod(x, y));
//}
//int main()
//{
//	double x1, y1, x2, y2, x3, y3;
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	//计算三角形的三条边长
//	double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//	double b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
//	double c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
//	double p = (a + b + c) / 2;
//	double s = sqrt((p*(p - a)*(p - b)*(p - c)));
//	//外接圆半径
//	double r = a*b*c / (4 * s);
//	//余弦定理结合反三角函数求角
//	double angleA = acos(b*b + c*c - a*a / (2 * b*c));
//	double angleB = acos(a*a + c*c - b*b / (2 * a*c));
//	double angleC = acos(a*a + b*b - c*c / (2 * a*b));
//	double angle = gcd(angleA, gcd(angleB, angleC))/Pi*180;
//	double side = sqrt(2 * r*r - 2 * r*r*cos(angle / 180 * Pi));
//	double P = (r * 2 + side) / 2;
//	double S = sqrt(P*(P - r)*(P - r)*(P - side))/*三角形面积*/*(360 / angle)/*三角形个数*/;//计算面积
//	printf("%.6lf\n", S);
//	return 0;
//}