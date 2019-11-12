#ifndef __CLIENT_H
#define __CLIENT_H

#include <ostream>

enum class Gender{FEMALE, MALE};
std::string to_string(Gender gender);
std::ostream& operator<<(std::ostream& ost, const Gender& gender);

class Client {
  public:
    Client(std::string name, std::string phone, std::string email);
     std::string name();
      std::string phone();
      std::string email();
    void adopt(Animal &animal);
    int number_adopted;
  const Animal& Animal(int index);
      
 virtual ~Client();

    virtual std::string family() const = 0;
    virtual std::string breed() const = 0;
    std::string name() const;
    Gender gender() const;
    int age() const;

    virtual std::string to_string() const;
    friend std::ostream& operator<<(std::ostream& ost, const Animal& animal);
  private:
     std::vector<Animal*> _adopted;
       std::string _name;
      std::string _phone;
      std::string email;
      
};

#endif

