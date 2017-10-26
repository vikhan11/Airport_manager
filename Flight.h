#pragma once
#include <iostream>
#include <string>
#include"Plane.h"
using namespace std;
class Flight
{
protected:
	double Departure_time;
	double Arrival_time;
	string Place_of_departure;
	string Place_of_landing;
	double airplane_number;
public:
	Flight();
	void set_Departure_time(double _Departure_time_);
	double get_Departure_time() const;
	void set_Arrival_time(double _Arrival_time_);
	double get_Arrival_time() const;
	string get_Place_of_departure() const;
	void set_Place_of_departure(string _Place_of_departure_);
	string get_Place_of_landing() const;
	void set_Place_of_landing(string _Place_of_landing_);
	//void info() const;
	~Flight();
};
