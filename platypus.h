#ifndef PLATYPUS_H
#define PLATYPUS_H
#include <iostream>
#include <string>
using namespace std;

class Platypus
{
public:
    Platypus(); // this default constructor is called for dead platypus because it sets all values to NULL or 0.
    Platypus(float, short, string, char);
    ~Platypus() {}

    void setWeight(float lbs) { weight = lbs; }
    void setAge(short yrs) { age = yrs; }
    void setString(string nam) { name = nam; }
    void setGender(char gen) { gender = gen; }
    void setStatus(bool alive) { status = alive; }
    void setMutant(bool mut) { mutant = mut; }

    float getWeight() { return weight; }
    short getAge() { return age; }
    string getName() { return name; }
    char getGender() { return gender; }
    bool getStatus() { return status; }
    bool getMutant() { return mutant; }


    friend void printPlatypus(Platypus);
    bool operator > (Platypus); // operator calls the first platypus object and the second is passed through the parameters comparing weight with fight
                                // ratio.
    void hatchPlatypus();
    //helper function to generate gender and returns it to the hatchPlatypus
    char generateGender();
    string generateName();
    float generateWeight();

private:
    float weight;
    short age;
    string name;
    char gender;
    bool status; //is the platypus alive or dead?
    bool mutant;

    void ageMe(short age, float weight, bool mutant);
    void platypusEat(float weight);

};

//May need a function to check the status of the platypus before the function is executed
//In certain functions, you may also need to check if the platypus is mutant

#endif // PLATYPUS_H
