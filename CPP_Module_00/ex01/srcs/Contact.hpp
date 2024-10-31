#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact {
 public:
  Contact(void);
  ~Contact(void);

  void displayFull(void);
  void displayPartial(int i);
  void changeInfo(std::string info[5]);

 private:
  std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string phoneNumber;
  std::string darkestSecret;

  void init(void);
  static std::string trunkedString(const std::string& str);
};

#endif
