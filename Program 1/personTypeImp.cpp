//personTypeImp.cpp

#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << middleName << " " << lastName;
}

void personType::setName(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getMiddleName() const
{
    return middleName;
}

string personType::getLastName() const
{
    return lastName;
}

bool personType::isLastName(string last) const
{
    return (lastName == last);
}
bool personType::isFirstName(string first) const
{
    return (firstName == first);
}

//constructor
personType::personType(string first, string middle, string last)

{
    firstName = first;
    middleName = middle;
    lastName = last;
}
