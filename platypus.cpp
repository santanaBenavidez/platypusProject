//Implementation file
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
        cout << weight << endl;
    } else

    return;
    //Working function!
}

void Platypus::hatchPlatypus()
{
    status = true;
    mutant = false;
    age = 0;
    gender = generateGender();
    name = generateName();
    weight = generateWeight();
    cout << name << endl;
    cout << gender << endl;
    cout << weight << endl;
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
        random = rand() % 50;

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
        random = rand() % 50;

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
