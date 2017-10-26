#pragma once
#include <iostream>
#include <string>

using namespace std;
class Place
{
protected:
	double number;
public:
	Place();
	void set_number(double _number_);
	double get_number() const;
	//void info() const;
	~Place();
};
