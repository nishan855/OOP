#include "rabbit.h"

// Constructor / Destructor - note how delegation to base class works!
Rabbit::Rabbit(Rabbit_breed breed, std::string name, Gender gender, int age)
    : Animal(name, gender, age), _breed{breed} { }
 Rabbit::~Rabbit() { }

// Overrides for pure virtual methods
std::string Rabbit::family() const {return "Rabbit";}
std::string Rabbit::breed() const {return ::to_string(_breed);}

// Convert breed to string and stream - use a std::map for other derived classes!
std::string to_string(const Rabbit_breed& breed) {
    switch(breed) {
        case  Rabbit_breed::ALASKA:        return "ALASKA";
        case  Rabbit_breed::ANGORA:   return "ANGORA";
        case  Rabbit_breed::BRITISH_GIANT:  return "BRITISH_GIANT"; 
        case  Rabbit_breed::FLEMISH_GIANT:   return "FLEMISH_GIANT"; 
        case  Rabbit_breed::DUTCH:    return "DUTCH"; 
        case  Rabbit_breed::DWARF_HATOT:     return "DWARF_HATOT"; 
        case  Rabbit_breed::DWARF_LOP:     return "DWARF_LOP"; 
        case  Rabbit_breed::ENGLISH_LOP: return "ENGLISH_LOP"; 
        case  Rabbit_breed::FRENCH_LOP:    return "FRENCH_LOP"; 
        case  Rabbit_breed::HOLLAND_LOP:    return "HOLLAND_LOP"; 
        case  Rabbit_breed::RUSSIAN:      return "RUSSIAN"; 
        case  Rabbit_breed::REX:  return "REX"; 
        default:                     return "UNKNOWN";
    }
}
std::ostream& operator<<(std::ostream& ost, const Rabbit_breed& breed) {
    ost << ::to_string(breed);
    return ost;
}

 