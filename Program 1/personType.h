#pragma once
#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H
#include <string>
using namespace std;
class personType
{
public:
	void print() const;
	//outputs the first middle and last name

	void setName(string first, string middle, string last);
	//sets the first middle and last name according to the parameters.

	void setLastName(string last);

	void setFirstName(string first);

	void setMiddleName(string middle);

	bool isLastName(string last) const;

	bool isFirstName(string first) const;

	string getFirstName() const;
	//Function returns the first name

	string getMiddleName() const;
	//Function returns the middle name

	string getLastName() const;
	//function returns the last name

	personType(string first = "", string middle = "", string last = "");
private:
	string firstName;
	string middleName;
	string lastName;
};
#endif