#ifndef __RABBIT_H
#define __RABBIT_H

#include "animal.h"

// List of dog breeds, conversion to/from string and stream, and iteration
enum class Rabbit_breed {
    ALASKA,
    ANGORA,
    BRITISH_GIANT,
    FLEMISH_GIANT,
    DUTCH,
    DWARF_HATOT,
    DWARF_LOP,
    ENGLISH_LOP,
    FRENCH_LOP,
    HOLLAND_LOP,
    RUSSIAN,
    REX,
};
constexpr Rabbit_breed rabbit_breeds[] = {
    Rabbit_breed::ALASKA,
    Rabbit_breed::ANGORA,
    Rabbit_breed::BRITISH_GIANT,
    Rabbit_breed::FLEMISH_GIANT,
    Rabbit_breed::DUTCH,
    Rabbit_breed:: DWARF_HATOT,
    Rabbit_breed:: DWARF_LOP,
    Rabbit_breed::ENGLISH_LOP,
    Rabbit_breed:: FRENCH_LOP,
    Rabbit_breed:: HOLLAND_LOP,
    Rabbit_breed::RUSSIAN,
    Rabbit_breed::REX,
};
std::string to_string(const Rabbit_breed& breed);
std::ostream& operator<<(std::ostream& ost, const Rabbit_breed& breed);

// Class rabbit with overrides for family and breed
class Rabbit : public Animal {
  public:
    Rabbit(Rabbit_breed breed, std::string name, Gender gender, int age);
    virtual ~Rabbit();
    virtual std::string family() const override;
    virtual std::string breed() const override;
  private:
    Rabbit_breed _breed;
};

#endif
