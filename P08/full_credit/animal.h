#ifndef __ANIMAL_H
#define __ANIMAL_H

#include <vector>
#include <iostream>
#include <climits> 
#include <cfloat>  // DBL_MAX
#include <sstream>

enum Gender {male, female};
const std::vector<std::string>gender to _string={"male","female"};

class Animal {
  public:
    Animal(std::string name,Gender gender,int age):_name(name),_gender(gender),_age(age){};
    
   ~Animal();

    virtual std::string family()=0;
    virtual std:: string breed()=0;
    std::string name();
    Gender gender();
    int age();
    virtual std::string to_string () const; 
  protected:
    std::string _name;
   Gender _gender;
  int _age;
};
#endif
