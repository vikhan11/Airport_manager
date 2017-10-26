#pragma once
#include <iostream>
#include <string>

using namespace std;
class Plane
{
protected:
	char Places;
	double airplane_number;
public:
	Plane();
	void set_Places(char _Places_);
	void set_airplane_number(double _airplane_number_);

	char get_Places() const;
	double get_airplane_number() const;
	//void info() const;
	~Plane();
};