#include <iostream>
#include <string>

void pointers() {
  std::string message = "test pointers message";
  std::string *ptr = &message;
  // *ptr = message;

  std::cout << message << "\n";
  std::cout << "ptr: " << *ptr << std::endl;

  std::cout << "ptr ref: " << &ptr << std::endl;

  *ptr = "test ptr";

  std::cout << message << "\n";
  std::cout << "ptr2: " << *ptr << std::endl;
}

int main() {

  std::string first_name, last_name, message;

  const double pi = 3.14;
  bool is_ready = false;

  // std::cout << "Type your first name: ";
  // std::cin >> first_name;
  //
  // std::cout << "Type your last name: ";
  // std::cin >> last_name;
  //
  // message = "Hello, " + std::to_string(pi) + " ?? " + first_name + " " +
  //           last_name + "!\n";
  //
  // std::cout << message << " length: " << message.length() << "\nis ready - "
  //           << is_ready << "\n";
  //
  // std::cout << &message << std::endl;

  pointers();

  return 0;
}
