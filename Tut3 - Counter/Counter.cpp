#include "Counter.h"
#include <iostream>

using namespace std;


Counter::Counter(int s,int f,int st)
{
	current = s;
	start = s;
	finish = f;
	step = st;

}


Counter::~Counter()
{
}

int Counter::getcurrent()
{
	return current;
}


Counter Counter::operator++()
{
	Counter icecream(start, finish, step);
	if (current + step <= finish)
	{
		current += step;
	}

	else
	{
		cout << "Maximum count reached" << endl;
	
	}

	icecream.current = current;
	return icecream;

}

Counter Counter::operator++(int)
{
	Counter icecream(start, finish, step);
	icecream.current = current;

	if (current + step <= finish)
	{
		current += step;
	}

	else
	{
		cout << "Maximum count reached" << endl;
	}
	 
	return icecream;
}

Counter Counter::operator--()
{
	Counter icecream(start, finish, step);
	if (current - step >= finish)
	{
		current -= step;
	}

	else
	{
		cout << "Minimum count reached" << endl;
	}

	icecream.current = current;
	return icecream;
}

Counter Counter::operator--(int)
{
	Counter icecream(start, finish, step);
	icecream.current = current;

	if (current - step >= finish)
	{
		current -= step;
	}

	else
	{
		cout << "Minimum count reached" << endl;
	}

	return icecream;
}