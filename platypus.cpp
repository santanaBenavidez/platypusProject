//Implementation file
/*
 Filename: platypus.cpp
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
#include <cmath>
#include <fstream>
using namespace std;

Platypus::Platypus()
{
    weight = 0;
    age = 0;
    name = "NULL";
    gender = 'n';
    status = false;
    mutant = true;
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

void Platypus::platypusEat()
{
    int conversionValue;
    int decimalValue;
    float percentIncrease;
    conversionValue = rand() % 5 + 1;
    decimalValue = rand() % 100 + 1000;
    percentIncrease = static_cast<float>(conversionValue) / decimalValue;
    if (status == true)
    {
        weight = (weight + (weight * percentIncrease));
    } else

    return;
}

void Platypus::hatchPlatypus()
{
    status = true;
    mutant = false;
    age = 0;
    gender = generateGender();
    name = generateName();
    weight = generateWeight();
}

char Platypus::generateGender()
{
    char newGen;
    int stork;
    stork = rand() % 2;
    if(stork == 0)
    {
        newGen = 'm';
    }else if (stork == 1)
    {
        newGen = 'f';
    }
    gender = newGen;
    return gender;
}

string Platypus::generateName()
{
    string fname;
    string line;
    int random = 0;
    int lineNum = 0;
    ifstream fin;
    if(generateGender() == 'm')
    {
        fin.open("m_names.txt");
        random = rand() % 50 + 1;

        while(getline(fin, line))
        {
            ++lineNum;

        if(lineNum == random)
        {
            name = line;
        }
    }
        fin.close();
    }else if(generateGender() == 'f')
    {
        fin.open("f_names.txt");
        random = rand() % 50 + 1;

        while(getline(fin, line))
        {
            ++lineNum;

        if(lineNum == random)
        {
            name = line;
        }

    }
        fin.close();
    }
    return name;
}

float Platypus::generateWeight()
{
    int randomNumber = rand() % 10 + 1;
    int num = 10;

    weight = static_cast <float> (randomNumber) / static_cast <float> (num);

    return weight;
}

void Platypus::ageMe() // I don't think we have to import variables? not sure
{                      // how it will be used, so feel free to import a Platypus
    srand(time(NULL)); // object or the individual variables if you want.
    age++;

    int randomNumber1 = rand() % 100 + 1;
    int randomNumber2 = rand() % 100 + 1;

    if(randomNumber1 <= 2)
        mutant = true;
    if(randomNumber2 <= weight*10)
        status = false;
    return;
}

bool Platypus::operator > (Platypus p2)
{
    srand(time(NULL));
    int randomNumber = rand() % 99 + 1;

    return ( randomNumber > (this->weight)/(p2.weight)*50 );
}

void printPlatypus(Platypus p1)
{
    string stat;
    string mut;

    if(p1.status == 1)
        stat = "Alive";
    else if (p1.status == 0)
        stat = "Dead";

    if(p1.mutant == true)
        mut = "Mutant";
    else if (p1.mutant == false)
        mut = "Not Mutant";

    cout << "Platypus Details\n---------------\n";
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Weight: " << p1.weight << endl;
    cout << "Gender: " << p1.gender << endl;
    cout << "Status: " << stat << endl;
    cout << "Mutant?: " << mut << endl << endl;

    return;
}

