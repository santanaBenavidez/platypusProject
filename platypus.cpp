//Implementation file
#include "platypus.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include "platypus.h"
using namespace std;

Platypus::Platypus()
{
    weight = 0;
    age = 0;
    name = "NULL";
    gender = 'N';
    status = false;
    mutant = false;
}

Platypus::Platypus(float lbs, short yrs, string nam, char gen)
{
    weight = lbs;
    age = yrs;
    name = nam;
    gender = gen;
    status = true;
    mutant = false;
}

void Platypus::hatchPlatypus()
{
    string fname;
    string line;
    int random = 0;
    int numOfLines = 0;
    ifstream fin;
    status = true;
    mutant = false;
    age = 0;
    //gender = generateGender();
    //weight = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    if(generateGender() == 'm')
    {
        fin.open("/Users/santanabenavidez/Downloads/m_names.txt");
        random = rand() % 50;

        while(getline(fin, line))
        {
        ++numOfLines;

        if(numOfLines == random)
        {
            name = line;
        }
    }
        fin.close();
    }else if(generateGender() == 'f')
    {
        fin.open("/Users/santanabenavidez/Downloads/f_names.txt");
        random = rand() % 50;

        while(getline(fin, line))
        {
        ++numOfLines;

        if(numOfLines == random)
        {
            name = line;
        }

    }
        fin.close();
    }
    cout << name;
    cout << gender;
}

char Platypus::generateGender()
{
    char newGen;
    int stork;
    stork = rand() % 2;
    if(stork == 0)
    {
        newGen = 'm';
    }else if(stork == 1)
    {
        newGen = 'f';
    }
    gender = newGen;
    return gender;
}
