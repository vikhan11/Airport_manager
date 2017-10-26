#pragma once
#include <iostream>
#include <string>

using namespace std;
class Passenger
{
protected:
	string name;
	string surname;
public:
	Passenger();
	void set_name(string _name_);
	string get_name() const;
	void set_surname(string _surname_);
	string get_surname() const;
	//void info() const;
	~Passenger();
};
