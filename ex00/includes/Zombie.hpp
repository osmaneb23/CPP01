#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
  private:
	std::string _name;
	void announce(void);

  public:
	Zombie(void);
	~Zombie(void);
};

#endif