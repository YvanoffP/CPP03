#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
    std::cout << "Void ScavTrap constructor called" << std::endl;
    this->setHp(100);
    this->setAd(20);
    this->setEnergy(50);
}

ScavTrap::ScavTrap( std::string newName )
{
    std::cout << "ScavTrap Name construcor called" << std::endl;
    this->setHp(100);
    this->setAd(20);
    this->setEnergy(50);
    this->setName( newName );
}

ScavTrap::ScavTrap( const ScavTrap &copy ): ClapTrap(copy)
{
    std::cout << "ScavTrap " << this->getName() << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "Standard ScavTrap deconstructor called" << std::endl;
}

void ScavTrap::attack( const std::string& target )
{
    if (this->getEnergy() > 0 && this->getHp() > 0)
    {
        this->useEnergy();
        std::cout << "ScavTrap " << this->getName() << " attacks "
            << target << ", causing " << this->getAd()
            << " points of damage! What a hit !" << std::endl;
    }
    else if (getEnergy() == 0)
        std::cout << "ScavTrap " << this ->getName() << " is tired ! No more energy" << std::endl;
    else
        std::cout << "ScavTrap " << this->getName() << " is wounded ! No more health" << std::endl;
}

void ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << this->getName() << " : Mode Gate Keepter activated." << std::endl;
}
