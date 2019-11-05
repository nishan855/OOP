#ifndef __DOG_H
#define __DOG_H

#include <Animal.h>
#include <vector>
enum breed{afador,akita,bulldog,pugabull,basenji,beagle,boxer,grayhound};
const std::vector <std::string>breed_to_string={"afador","akita","bulldog","pugabull","basenji","beagle","boxer","grayhound"};

class  Dog: Public Animal{
  public:
 Dog(Dog_breed breed, std::string name,Gender gender,int age): Animal(name,gender,age){};
~Dog():
std::string family() override;
std::string breed() override;

protected :
Dog_breed_breed;
};

#endif
