#include "cat.h"

// Constructor / Destructor - note how delegation to base class works!
Cat::Cat(Cat_breed breed, std::string name, Gender gender, int age)
    : Animal(name, gender, age), _breed{breed} { }
 Cat::~Cat() { }

// Overrides for pure virtual methods
std::string Cat::family() const {return "cat";}
std::string Cat::breed() const {return ::to_string(_breed);}

// Convert breed to string and stream - use a std::map for other derived classes!
std::string to_string(const Dog_breed& breed) {
    switch(breed) {
        case  Cat_breed::RAGDOLL:        return "RAGDOL";
        case   Cat_breed::PERSIAN:   return "PERSIAN:";
        case  Cat_breed::SIAMESE:  return "SIAMESE"; 
        case  Cat_breed::ABYSSINIAN:   return "ABYSSINIAN"; 
        case  Cat_breed::BURMESE:    return "BURMESE"; 
        case  Cat_breed::BENGAL:     return "BENGAL"; 
        case  Cat_breed::BIRMAN:     return "BIRMAN"; 
        case  Cat_breed::TONKINESE: return "TONKINESE"; 
        case  Cat_breed::OCICAT:    return "OCICAT"; 
        case  Cat_breed::CHAUSIE:    return "CHAUSIE"; 
        case  Cat_breed::SCOTTISH:      return "SCOTTISH"; 
        case   Cat_breed::SAVANNAH:  return "SAVANNAH"; 
        default:                     return "UNKNOWN";
    }
}
std::ostream& operator<<(std::ostream& ost, const Cat_breed& breed) {
    ost << ::to_string(breed);
    return ost;
}

 