#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _hp(10), _energy(10), _ad(0), _type("ClapTrap"), _maxHp(10)
{
    std::cout << "Void constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string newName ): _name(newName),  _hp(10), _energy(10), _ad(0), _type("ClapTrap"), _maxHp(10)
{
    std::cout << "Name construcor called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Standard destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=( const ClapTrap &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_hp = 10;
	this->_energy = 10;
	this->_ad = 0;
	this->_type = "ClapTrap";
	this->_maxHp = 10;
	std::cout << this->getType() << " Copy assignement operator called" << std::endl;
	return (*this);
}

int ClapTrap::getHp( void ) const
{
    return (this->_hp);
}

int ClapTrap::getEnergy( void ) const
{
    return (this->_energy);
}

ClapTrap::ClapTrap( const ClapTrap &copy ): _type(copy.getType())
{
    std::cout << this->getType() << " " << this->getName() << " copy constructor called" << std::endl;
}

void ClapTrap::setType( std::string type )
{
	this->_type = type;
}

std::string ClapTrap::getName( void ) const
{
    return (this->_name);
}

void ClapTrap::setMaxHp( int maxHp )
{
	this->_maxHp = maxHp;
}

int ClapTrap::getAd( void ) const
{
    return (this->_ad);
}

void ClapTrap::setHp( int hp )
{
    this->_hp = hp;
}

void ClapTrap::setAd( int ad )
{
    this->_ad = ad;
}

int ClapTrap::getMaxHp( void ) const
{
	return (this->_maxHp);
}

void ClapTrap::setName( std::string newName )
{
    this->_name = newName;
}

void ClapTrap::setEnergy( int energy )
{
    this->_energy = energy;
}

std::string ClapTrap::getType( void ) const
{
	return (this->_type);
}

void ClapTrap::attack( const std::string& target )
{
    if (this->getEnergy() > 0 && this->getHp() > 0)
    {
        this->_energy--;
        std::cout << this->getType() << " " << this->getName() << " attacks "
            << target << ", causing " << this->getAd()
            << " points of damage!" << std::endl;
    }
    else if (getEnergy() == 0)
        std::cout << this->getType() << " " << this->getName() << " is tired ! No more energy" << std::endl;
    else
        std::cout << this->getType() << " " << this->getName() << " is wounded ! No more health" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->getHp() > 0)
    {
        this->_hp = (this->getHp() - (int)amount) < 0 ? 0 : (this->getHp() - (int)amount);
        std::cout << this->getType() << " " << this->getName() << " has taken " << (int)amount << " damage !"
            << " He now have " << this->getHp() << "hp !" << std::endl;
    }
    else
    {
        std::cout << this->getType() << " " << this->getName() << " is already at 0 hp ! Give him a break !" << std::endl;
    }
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->getHp() < this->getMaxHp())
    {
        this->_hp = (this->getHp() + (int)amount) > this->getMaxHp() ? this->getMaxHp() : (this->getHp() + (int)amount);
        std::cout << this->getType() << " " << this->getName() << " has been repaired for : " << amount << "! His current hp is :"
            << this->getHp() << std::endl;
    }
    else
        std::cout << this->getType() << " " << this->getName() << " is already at max hp (" << this->getMaxHp() << ") !" << std::endl;
}
