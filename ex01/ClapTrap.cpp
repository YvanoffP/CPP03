#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _hp(10), _energy(10), _ad(0)
{
    std::cout << "Void constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string newName ): _name(newName),  _hp(10), _energy(10), _ad(0)
{
    std::cout << "Name construcor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy ): _name(copy.getName()),
                                            _hp(copy.getHp()),
                                            _energy(copy.getEnergy()),
                                            _ad(copy.getAd())
{
    std::cout << "ClapTrap " << this->getName() << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Standard ClapTrap deconstructor called" << std::endl;
}

int ClapTrap::getHp( void ) const
{
    return (this->_hp);
}

int ClapTrap::getEnergy( void ) const
{
    return (this->_energy);
}

std::string ClapTrap::getName( void ) const
{
    return (this->_name);
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

void ClapTrap::setName( std::string newName )
{
    this->_name = newName;
}

void ClapTrap::setEnergy( int energy )
{
    this->_energy = energy;
}

void ClapTrap::attack( const std::string& target )
{
    if (this->getEnergy() > 0 && this->getHp() > 0)
    {
        this->_energy--;
        std::cout << "ClapTrap " << this->getName() << " attacks "
            << target << ", causing " << this->getAd()
            << " points of damage!" << std::endl;
    }
    else if (getEnergy() == 0)
        std::cout << "ClapTrap " << this ->getName() << " is tired ! No more energy" << std::endl;
    else
        std::cout << "ClapTrap " << this->getName() << " is wounded ! No more health" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->getHp() > 0)
    {
        this->_hp = (this->getHp() - (int)amount) < 0 ? 0 : (this->getHp() - (int)amount);
        std::cout << "ClapTrap " << this->getName() << " has taken " << (int)amount << " damage !"
            << " He now have " << this->getHp() << "hp !" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->getName() << " is already at 0 hp ! Give him a break !" << std::endl;
    }
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->getHp() < 10)
    {
        this->_hp = (this->getHp() + (int)amount) > 10 ? 10 : (this->getHp() + (int)amount);
        std::cout << "ClapTrap " << this->getName() << " has been repaired for : " << amount << "! His current hp is :"
            << this->getHp() << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->getName() << " is already at max hp (10) !" << std::endl;
}

void ClapTrap::useEnergy( void )
{
    this->_energy--;
}
