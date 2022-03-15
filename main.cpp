//Driver file to test functions
/*
 Filename: platypusDriver.cpp
 Summary: This is a program where the user should be able to set a platypus and use certain class member functions
 to manipulate its values.
 Authors: Madison Bartel-Muraski, Santana Benavidez, Jonathan Hawes
 Date: 3/15/2022
*/

#include "platypus.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    Platypus p0;
    Platypus p1(5.00, 3, "Perry", 'm');
    Platypus p2(6.85, 8, "Max", 'm');
    Platypus newBorn;

    srand (time(NULL));

    cout << "Testing default constructor..." << endl;
    printPlatypus(p0);

    cout << "Testing mutators..." << endl;
    p0.setWeight(7.5);
    p0.setAge(3.5);
    p0.setName("Lily");
    p0.setGender('f');
    printPlatypus(p0);

    cout << "Testing overloaded operator..." << endl;
    printPlatypus(p1);

    cout << "Testing hatch function..." << endl;
    newBorn.hatchPlatypus();
    printPlatypus(newBorn);

    cout << "Testing the eat function..." << endl;
    p0.platypusEat();
    p1.platypusEat();
    newBorn.platypusEat();
    printPlatypus(p0);
    printPlatypus(p1);
    printPlatypus(newBorn);

    cout << "Testing the aging function..." << endl;
    newBorn.ageMe();
    printPlatypus(newBorn);

    cout << "Testing fight function..." << endl;
    if(p1 > p2)
    {
        p2.setStatus(false);

    }else
        p1.setStatus(false);

    printPlatypus(p1);
    printPlatypus(p2);

    return 0;
}
