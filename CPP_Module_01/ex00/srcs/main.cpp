  #include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
  std::cout << std::endl;
  std::cout << "Creating zombie on the stack." << std::endl
            << std::endl;
  randomChump("Zombialfa");
  std::cout << std::endl << std::endl;

  std::cout << "Creating zombie on the heap." << std::endl
            << std::endl;
  Zombie* z = newZombie("Zombiromeo");
  z->announce();
  delete (z);
  std::cout << std::endl << std::endl;

  return (0);
}  
    
