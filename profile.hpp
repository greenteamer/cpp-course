#include <iostream>
#include <vector>
using namespace std;

class Profile {
private:
  string name;
  int age;
  string city;
  string country;
  string pronouns;
  vector<string> hobbies;

public:
  Profile(string n, int a) {
    name = n;
    age = a;
  }

  void view_profile();

  void set_name(string value);
  void set_age(int value);
  void set_city(string value);
  void set_country(string value);
  void set_pronouns(string value);
  void add_to_hobbies(string value);
};
