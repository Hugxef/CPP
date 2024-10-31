#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>

#include "Contact.hpp"

class PhoneBook {
 public:
  PhoneBook(void);
  ~PhoneBook(void);
  void searchContact(void);
  void addContact(void);

 private:
  Contact contactArray[8];
  int nbOfContact;

  int searchInList(std::string cmd);
  void displayList(void);
  void eraseContact(void);
  static std::string askField(const std::string& field);
};
#endif
