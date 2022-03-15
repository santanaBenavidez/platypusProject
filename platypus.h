/*
 Filename: platypus.h
 Summary: This is a program where the user should be able to set a platypus and use certain class member functions
 to manipulate its values.
 Authors: Madison Bartel-Muraski, Santana Benavidez, Jonathan Hawes
 Date: 3/15/2022
*/

#ifndef PLATYPUS_H
#define PLATYPUS_H
#include <iostream>
#include <string>
using namespace std;

class Platypus
{
public:
    Platypus(); // this default constructor is called for dead platypus because it sets all values to NULL or 0.
    Platypus(float, short, string, char); //overloaded constrctor
    ~Platypus() {} //destructor
    //mutators
    void setWeight(float lbs) { weight = lbs; } //inline function that sets weight to lbs
    void setAge(short yrs) { age = yrs; } //inline function that sets age to yrs
    void setName(string nam) { name = nam; } //inline function that sets name to nam
    void setGender(char gen) { gender = gen; } //inline function that sets gender to gen
    void setStatus(bool alive) { status = alive; } //inline function that sets status to alive
    void setMutant(bool mut) { mutant = mut; } //inline function that sets mutant to mut

    float getWeight() { return weight; } //Accessor function that return weight
    short getAge() { return age; }//Accessor function that returns age
    string getName() { return name; }//Accessor function that returns name
    char getGender() { return gender; }//Accessor function that returns gender
    bool getStatus() { return status; }//Accessor function that returns status
    bool getMutant() { return mutant; }//Accessor function that return mutant


    friend void printPlatypus(Platypus);//friend function that prints all the values of the Platypus class
    bool operator > (Platypus); // operator calls the first platypus object and the second is passed through the parameters comparing weight with fight
                                // ratio.
    void hatchPlatypus();//Member function that hatches a new platypus with defaulted age, alive, and mutant values
                        //and sets gender, name, and weight to passed in values
    void platypusEat();
    char generateGender();//randomly generates gender with a 50% chance of male or female
    float generateWeight();//randomly generates weight within a range of 0.1 to 1.0 pounds
    string generateName();//randomly selects a name according the result of generateGender from list of names
    void ageMe(); //ages a platypus and and randomly determines if the platypus dies or mutates

private:
    float weight;
    short age;
    string name;
    char gender;
    bool status; //is the platypus alive or dead?
    bool mutant;

};

//May need a function to check the status of the platypus before the function is executed
//In certain functions, you may also need to check if the platypus is mutant

#endif // PLATYPUS_H
