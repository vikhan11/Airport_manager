#pragma once
#include <iostream>
#include <string>

using namespace std;
class Airport
{
protected:
	string name;
	string city;
public:
	Airport();
	void set_name(string _name_);
	void set_city(string _city_);

	string get_name() const;
	string get_city() const;
	//void info() const;
	~Airport();
};