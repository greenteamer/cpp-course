#include "profile.hpp"
#include <iostream>
#include <vector>
using namespace std;

void Profile::view_profile() {
  cout << "\nname: " << name;
  cout << "\nage: " << age;
  cout << "\ncity: " << city;
  cout << "\ncountry: " << country << endl;
  cout << "\npronouns: " << pronouns << endl;
  cout << "\nhobbies:";
  for (auto hobbie : hobbies) {
    cout << hobbie << ", ";
  }
}

void Profile::set_name(string value) { name = value; }
void Profile::set_age(int value) { age = value; }
void Profile::set_city(string value) { city = value; }
void Profile::set_country(string value) { country = value; }
void Profile::set_pronouns(string value) { pronouns = value; }
void Profile::add_to_hobbies(string value) { hobbies.push_back(value); }

int main() {
  Profile alex("Alex", 36);
  alex.set_country("Georgia");
  alex.set_city("Batumi");
  alex.set_pronouns("they/them");
  alex.add_to_hobbies("coding");
  alex.view_profile();
}
