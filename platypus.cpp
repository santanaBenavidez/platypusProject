//Implementation file
#include "platypus.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
using namespace std;

Platypus()
{
    weight = 0;
    age = 0;
    name = "NULL";
    gender = 'N';
    status = false;
    mutant = false;
}

Platypus(float lbs, short yrs, string nam, char gen)
{
    weight = lbs;
    age = yrs;
    name = nam;
    gender = gen;
    status = true;
    mutant = false;
}
