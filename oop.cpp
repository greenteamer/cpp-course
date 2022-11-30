#include <iostream>
#include <string>

class School {
public:
  std::string name;
  int age;
  void set_name(std::string name);

  void banner() { std::cout << name << " is " << age << " years old.\n"; }
};

void School::set_name(std::string name) { this->name = name; }

class House {
private:
  std::string location;
  int rooms;

public:
  House() {
    location = "NY";
    rooms = 4;
  }

  void summary() {
    std::cout << location << " house with " << rooms << " rooms.\n";
  }
};

int main() {

  School best_school;
  best_school.set_name("codereacher");
  best_school.age = 10;
  best_school.banner();

  House my_home;
  my_home.summary();

  return 0;
}
