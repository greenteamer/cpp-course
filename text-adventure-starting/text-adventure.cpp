#include <iostream>
#include <string>

std::string scene1 = "WELCOME TO THE ADVENTURE GAME!\n"
                     "Let's start the action! ☆-🎬-☆\n"
                     "Lily wakes up in her bedroom in the middle of the night. "
                     "She heard a loud BAN outside the house.\n"
                     "Now she has two choices she can either stay in the room "
                     "or check what the sound might be about.\n"
                     "\nType your choice: Stay or Evaluate?\n\n";

std::string stay_effect =
    "\nLily decides to stay in the room and ends up staying "
    "inside forever as noone seems to come to help her.\n";

std::string evaluate_effect =
    "\nLily exits the room silently and reaches the main hall.\n";

std::string scene2 = "\nIn the main hall, she finds a strange but cute teddy "
                     "bear on the floor.\n"
                     "She wanted to pick the teddy up.\n"
                     "But should she? It doesn't belong to her. (•˳̂•̆)\n"
                     "\nType your choice: Pick or Ignore?\n\n";

std::string is_picked_effect =
    "\nThe moment Lily picked up the the teddy bear. The Teddy bear starts "
    "TALKING!The bear tells Lily that she is in grave danger as there is a "
    "monster in the house.And the monster has captured her PARENTS as well!But "
    "he hugged her and told her not to get scared as he knows how to beat the "
    "moster!\n"
    "\nThe bear handed lily a magical potion which can weaken the moster and "
    "make him run away!He handed her the potion and then DISAPPEARED!Lily "
    "moved forward.\n";

std::string is_not_picked_effect =
    "\nLily decided not to pick up the bear and walked forward.\n\n";

std::string scene3 =
    "\nAfter walking for a while, Lily saw the MONSTOR in front of her!\n"
    "It had red eyes and evil looks. She got very scared!\n\n";

std::string is_picked_final = "\nBut then she remembered! She had the magic "
                              "portion and she threw it on the moster! "
                              "Well she had nothing to lose!\n"
                              "The monster SCREAMED in pain but he managed to "
                              "make a portal and pushed Lily to a new world!\n";

std::string is_not_picked_final =
    "\nThe monster attacked Lily and hurt her! She was then thrown to the new "
    "world by the monster!\n";

std::string scenes[3] = {scene1, scene2, scene3};
std::string answers[2][2] = {{"Stay", "Evaluate"}, {"Pick", "Ignore"}};

void third_scene(bool is_picked) {
  std::cout << scenes[2];
  if (is_picked) {
    std::cout << is_picked_final;
  } else {
    std::cout << is_not_picked_final;
  }
}

void second_scene() {
  std::cout << scenes[1];
  std::string answer = "wrong";
  while (answer == "wrong") {
    std::cin >> answer;
    if (answer == answers[1][0]) {
      std::cout << is_picked_effect;
      third_scene(true);
    } else if (answer == answers[1][1]) {
      std::cout << is_not_picked_effect;
      third_scene(false);
    } else {
      std::cout << "\nENTER THE CORRECT CHOICE!" << answers[1][0] << " or "
                << answers[1][1] << "?\n";
      answer = "wrong";
    }
  }
}

void first_scene() {
  std::cout << scenes[0];
  std::string answer = "wrong";
  while (answer == "wrong") {
    std::cin >> answer;
    if (answer == answers[0][0]) {
      std::cout << stay_effect;
    } else if (answer == answers[0][1]) {
      std::cout << evaluate_effect;
      second_scene();
    } else {
      std::cout << "\nENTER THE CORRECT CHOICE!" << answers[0][0] << " or "
                << answers[0][1] << "?\n";
      answer = "wrong";
    }
  }
}

int main() {

  first_scene();

  std::cout << "\n\n";
  std::cout << "=================================END OF CHAPTER "
               "1=================================";

  return 0;
}
