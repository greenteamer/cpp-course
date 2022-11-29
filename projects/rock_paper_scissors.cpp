#include <iostream>
#include <stdlib.h>
#include <string>

int main()
{
  srand(time(NULL));

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  int human_choice;
  std::cin >> human_choice;

  int comp_choice = std::rand() % 3 + 1;
  std::cout << "human: " << human_choice << "\nconmp: " << comp_choice << "\n";
  while (comp_choice == human_choice)
  {
    std::cout << "Choose again\n";
    std::cin >> human_choice;
    comp_choice = std::rand() % 3 + 1;
    std::cout << "human: " << human_choice << "\nconmp: " << comp_choice
              << "\n";
  }

  std::string winner;
  std::string human = "Human";
  std::string computer = "Computer";

  switch (comp_choice + human_choice)
  {
  case 5:
  case 3:
    winner = (human_choice > comp_choice) ? human : computer;
    break;
  case 4:
    winner = (human_choice > comp_choice) ? computer : human;
    break;
  }

  std::cout << winner << " is Winner!\n";

  return 0;
}
