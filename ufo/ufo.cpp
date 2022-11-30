#include "ufo_functions.hpp"
#include <iostream>
#include <vector>

int main() {
  greet();
  std::string codeword = "codecademy";
  std::string answer = "";
  for (int i = 0; i < codeword.length(); i++) {
    answer = answer + "_";
  }
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  while (answer != codeword && misses < 7) {
    char guess_char;
    std::cin >> guess_char;
    for (int i = 0; i < answer.length(); i++) {
      if (codeword[i] == guess_char) {
        answer[i] = guess_char;
        guess = true;
      }
    }
    std::cout << answer << std::endl;
    std::cout << "Incorrect Guesses:";
    for (auto chr : incorrect) {
      std::cout << chr;
    }
    if (!guess) {
      display_misses(misses);
      misses++;
    } else {
      guess = false;
    }
  }
  end_game(codeword, answer);
}
