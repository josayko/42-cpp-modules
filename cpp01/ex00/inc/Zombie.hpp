#include <iostream>

class Zombie {

public:
  Zombie(std::string str);
  ~Zombie(void);

  void announce(void);

private:
  std::string name;
};