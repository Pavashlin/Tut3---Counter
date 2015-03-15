// Tut3 - Counter.cpp : Defines the entry point for the console application.
//
#include "Counter.h"
#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c, i = 0;
	int in_or_dec;


	cout << "Please select mode:" << '\n' << "1. Increment" << '\n' << "2. Decrement" << endl;
	cin >> in_or_dec;

	if (in_or_dec == 1)
	{
		cout << "Enter Start for increment" << endl;
		cin >> a;

		cout << "Enter endpoint for increment" << endl;
		cin >> b;

		cout << "Enter step for increment" << endl;
		cin >> c;

		Counter test(a, b, c);

		while (a <= b)
		{
			cout << test.getcurrent() << endl;
			test++;
			a += c;
		}
	}

	else
	{
		cout << "Enter Start for decrement" << endl;
		cin >> a;

		cout << "Enter endpoint for decrement" << endl;
		cin >> b;

		cout << "Enter step for decrement" << endl;
		cin >> c;

		Counter test(a, b, c);

		while (a >= b)
		{
			cout << test.getcurrent() << endl;
			test--;
			a -= c;
		}
	}



	return 0;
}

