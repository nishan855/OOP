#ifndef __DOG_H
#define __DOG_H

#include "animal.h"

// List of cat breeds, conversion to/from string and stream, and iteration
enum class Cat_breed {
    RAGDOLL,
    PERSIAN,
    SIAMESE,
    ABYSSINIAN,
    BURMESE,
    BENGAL,
    BIRMAN, 
    TONKINESE,
    OCICAT,
    CHAUSIE,
    SCOTTISH,
    SAVANNAH,
};
constexpr Cat_breed cat_breeds[] = {
    Cat_breed::RAGDOLL,
    Cat_breed:: PERSIAN,
    Cat_breed::SIAMESE,
    Cat_breed::ABYSSINIAN,
    Cat_breed:: BURMESE,
    Cat_breed::BENGAL,
    Cat_breed::BIRMAN, 
    Cat_breed::TONKINESE,
    Cat_breed::OCICAT,
    Cat_breed:: CHAUSIE,
    Cat_breed:: SCOTTISH,
    Cat_breed:: SAVANNAH,
};
std::string to_string(const Cat_breed& breed);
std::ostream& operator<<(std::ostream& ost, const Cat_breed& breed);

// Class cat with overrides for family and breed
class Cat : public Animal {
  public:
    Cat(Cat_breed breed, std::string name, Gender gender, int age);
    virtual ~Cat();
    virtual std::string family() const override;
    virtual std::string breed() const override;
  private:
    Cat_breed _breed;
};

#endif
