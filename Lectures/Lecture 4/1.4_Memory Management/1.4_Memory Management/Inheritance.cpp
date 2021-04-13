#include <iostream>
#include<stdio.h>
#include <string>

using namespace std;

class Vehicle {
protected:
	string license;
	int year;
public:
	Vehicle(const string& myLicense, const int myYear) {
		license = myLicense;
		year = myYear;
	}

	const string &GetLicense() const {
		return license;
	}

	const int GetYear() const {
		return year;
	}

	virtual const string getDescription() const {
		return license + " from " + to_string(year);
	}
};

class Car : public Vehicle {
	//private variables local only to the car class
	string style;

public:
	//Constructor overload for both base class and the child
	Car(const string& myLicense, const int myYear, const string& myStyle) : Vehicle(myLicense, myYear), style(myStyle) {

	}

	const string GetDescription() const {
		return license + " from " + to_string(year) + " with style " + style;
	}

	const string& getStyle() { return style; }
};

class Truck : public Vehicle {
	//private variables local only to the car class
	string style;
public:
	//Constructor overload for both base class and the child
	Truck(const string& myLicense, const int myYear, const string& myStyle) : Vehicle(myLicense, myYear), style(myStyle) {

	}

	const string GetDescription() const {
		return license + " from " + to_string(year) + " with style " + style;
	}

	const string& getStyle() { return style; }
};


//Multi Inheritance
class TruckCar : public Truck, public Car {

};



