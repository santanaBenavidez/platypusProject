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
    void setString(string nam) { name = nam; } //inline function that sets name to nam 
    void setGender(char gen) { gender = gen; } //inline function that sets gender to gen
    void setStatus(bool alive) { status = alive; } //inline function that sets status to alive
    void setMutant(bool mut) { mutant = mut; } //inline function that sets mutant to mut

    float getWeight() { return weight; } //
    short getAge() { return age; }
    string getName() { return name; }
    char getGender() { return gender; }
    bool getStatus() { return status; }
    bool getMutant() { return mutant; }


    friend void printPlatypus(Platypus);
    bool operator > (Platypus); // operator calls the first platypus object and the second is passed through the parameters comparing weight with fight
                                // ratio.
    void hatchPlatypus();
    void platypusEat();
    char generateGender();
    float generateWeight();
    string generateName();

private:
    float weight;
    short age;
    string name;
    char gender;
    bool status; //is the platypus alive or dead?
    bool mutant;

    void ageMe(short age, float weight, bool mutant);

};

//May need a function to check the status of the platypus before the function is executed
//In certain functions, you may also need to check if the platypus is mutant

#endif // PLATYPUS_H
