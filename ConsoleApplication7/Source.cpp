#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
start:
	int x;
	cout << " ������� ����� �������: ";
	cin >> x;
	if (x == 1)
	{
		/*int q, r, q2;
		unsigned int a, d;
		cout << " ������� a: ";
		cin >> a;
		cout << " ������� d: ";
		cin >> d;
		q = a / d;
		q2 = a % d;
		cout << " �������: " << q << endl;
		cout << " ������� : " << q2 << endl;*/
	}
	if (x == 2)
	{
		/*int f, x, y;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		{
			if ((x == 0) && (y == 0))
				cout << "f=0 " << endl;
			else if (y == 0 && x > 0)
				cout << " f=12/x " << endl;
			else if (x == 0 && y > 0)
				cout << " f=12/y" << endl;
			else if (f = 144 / (x*y))
				cout << " f " << endl;

		}*/
	}
	if (x == 3)
	{
		/*int f, x, y;
		cout << " ������� �: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if (x > y)
			cout << x << "-" << y << endl;
		else
			cout << y << "-" << x << endl;*/
	}
	if (x == 4)
	{
		float f, x, y;
		cout << " ������� �: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		if (x > y)
			cout << x << "/" << y << endl;
		else
			cout << y << "/" << x << endl;
	}
	if (x == 5)
	{/*
		double f, x, y, z, m, n, k;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		cout << " ������� z: ";
		cin >> z;
		cout << " ������� n: ";
		cin >> n;
		cout << " ������� m: ";
		cin >> m;
		cout << " ������� k: ";
		cin >> k;
		if ((k < x) && (k < y) && (k < z))
			cout << "m*n / k" << endl;
		else
			cout << " ���� ";*/
	}
	if (x == 6)
	{
		/*int a, b, c;
		cout << " ������� a: ";
		cin >> a;
		cout << " ������� b: ";
		cin >> b;
		cout << " ������� �: ";
		cin >> c;
		if ((a < b) && (a < c))
			cout << a << endl;
		else if ((b < a) && (b < c))
			cout << b << endl;
		else if ((c < a) && (c < b))
			cout << c << endl;*/

	}
	if(x==7)
	{
		/*int a, b, c;
		cout << " ������� a: ";
		cin >> a;
		cout << " ������� b: ";
		cin >> b;
		cout << " ������� �: ";
		cin >> c;
		if ((a > b) && (a > c))
			cout << a << endl;
		else if ((b > a) && (b > c))
			cout << b << endl;
		else if ((c > a) && (c > b))
			cout << c << endl;*/

	}
	if (x == 8)
	{
		/*float x, y, z;
		cout << " ������� x: ";
		cin >> x;
		cout << " ������� y: ";
		cin >> y;
		cout << " ������� z: ";
		cin >> z;
		if (z == sqrt((x*x) + (y*y)))
			cout << "true" << endl;
		else
			cout << "false" << endl;*/
	}
}
