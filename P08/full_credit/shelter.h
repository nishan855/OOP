
#include "Animal.h"

class Store{
  public:
    Shelter(std::string name):_name(name){};
    std :string name();

    void add_animals(Animal & animal);
    int num_sweets();
    const Sweet& sweet(int number);
  private:
    std:: string_name;
    std::vector<Animal*>_available;
};
#endif
