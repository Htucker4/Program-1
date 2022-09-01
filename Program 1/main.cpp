
#include <iostream>  
#include <string>
#include "personType.h" 
using namespace std;


int main()
{
    personType student("Hunter", "Trey", "Tucker");
    student.print();

    cout << endl;


    string firstName;
    string middleName;
    string lastName;

    if (student.isFirstName("Hunter"))
        cout << "The sutdents first name is Hunter" << endl;
    else
        cout << "The students first name is not Hunter " << endl;

    if (student.isLastName("Morgan"))
        cout << "The students last name is Tucker" << endl;
    else
        cout << "the students last name is not Tucker" << endl;


}
