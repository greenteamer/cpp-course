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

void loops() {
  int count = 0;
  while (count <= 4) {
    std::cout << count;
    count++;
  }

  int fibonacci[6] = {0, 1, 1, 2, 3, 5};
  for (auto number : fibonacci) {
    std::cout << number << ", ";
  }
}

int main() {

  std::string greetings = (5 > 0) ? "True Greetings" : "False Greetings";

  std::cout << greetings << std::endl;

  pointers();
  loops();

  return 0;
}
