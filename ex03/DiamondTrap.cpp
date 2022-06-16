#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( void )
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->setType("DiamondTrap");
	this->setEnergy(50);
}

DiamondTrap::DiamondTrap ( const std::string name ): ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap " << name << " is build." << std::endl;
	_name = name;
	this->setType("DiamondTrap");
	this->setEnergy(50);
}

DiamondTrap::DiamondTrap ( const DiamondTrap &copy ): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap " << _name << " copy constructor called" << std::endl;
	_name = this->getName();
	this->setType("DiamondTrap");
	this->setEnergy(50);
}

DiamondTrap::~DiamondTrap ( void )
{
	std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

void DiamondTrap::attack ( const std::string &target )
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI ( void )
{
	std::cout << DiamondTrap::_name << " or " << ClapTrap::getName() << " ? " <<  std::endl;
}
