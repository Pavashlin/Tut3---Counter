#pragma once
#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>
using namespace std;
class Counter

{
private:
	int current;
	int start;
	int finish;
	int step;

public:
	Counter(int s = 0, int f = 255, int st = 1);
	~Counter();

	int getcurrent();
	
	Counter operator++(int);	//Postfix
	Counter operator--(int);
	Counter operator++();		//Prefix
	Counter operator--();

};

#endif

