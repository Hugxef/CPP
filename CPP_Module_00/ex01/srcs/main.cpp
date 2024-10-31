#include <limits>
#include <string>

#include "Phonebook.hpp"

int main(void) {
  PhoneBook p;

  std::string cmd;

  std::cout << std::endl;
  std::cout << "Welcome to your awesome PhoneBook !"
            << std::endl;
  std::cout << std::endl;
  while (!(std::cin).eof()) {
    std::cout << "What do you want to do? (ADD/SEARCH/EXIT)" << std::endl;
    getline(std::cin, cmd);
    if (cmd == "SEARCH")
      p.searchContact();
    else if (cmd == "ADD")
      p.addContact();
    else if (cmd == "EXIT")
      return (0);
    else {
      std::cout << std::endl;
      std::cout << "Wrong command" << std::endl;
      std::cout << std::endl;
    }
  }
  return 0;
}
