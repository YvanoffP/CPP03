#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
    std::cout << "Void FragTrap constructor called" << std::endl;
    this->setHp(100);
    this->setAd(30);
    this->setEnergy(100);
}

FragTrap::FragTrap( std::string newName )
{
    std::cout << "FragTrap Name construcor called" << std::endl;
    this->setHp(100);
    this->setAd(30);
    this->setEnergy(100);
    this->setName( newName );
}

FragTrap::FragTrap( const FragTrap &copy ): ClapTrap(copy)
{
    std::cout << "FragTrap " << this->getName() << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Standard FragTrap deconstructor called" << std::endl;
}

void FragTrap::attack( const std::string& target )
{
    if (this->getEnergy() > 0 && this->getHp() > 0)
    {
        this->useEnergy();
        std::cout << "FragTrap " << this->getName() << " attacks "
            << target << ", causing " << this->getAd()
            << " points of damage!" << std::endl;
    }
    else if (getEnergy() == 0)
        std::cout << "FragTrap " << this ->getName() << " is tired ! No more energy" << std::endl;
    else
        std::cout << "FragTrap " << this->getName() << " is wounded ! No more health" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::string ret;

	std::cout << "FragTrap " << this->getName() << " : High Fives ?" << std::endl;
    std::getline(std::cin, ret);
    if (std::cin.eof() || std::cin.bad() || ret.empty() || ret == "no" || ret == "n")
        std::cout << ":'(" << std::endl;
	else
        std::cout << "Let's go!" << std::endl;
}
